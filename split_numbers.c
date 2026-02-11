/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:12:39 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/11 11:31:21 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verif_str(char *str)
{
	int	i;
	int	size;

	size = 0;
	i = 0;
	while (str[i])
	{
		while (ft_isspace(str[i]))
			i++;
		if ((str[i] == '-' || str[i] == '+') && ft_isdigit(str[i + 1]))
			i++;
		while (ft_isdigit(str[i]))
			i++;
		if (str[i] && !ft_isspace(str[i]))
		{
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
		if (i > 0 && ft_isdigit(str[i - 1]))
			size++;
	}
	if (ft_strlen(str) == (size_t)i)
		return (size);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

int	verif_numbers(char **nbs)
{
	int	i;
	int	size;

	size = 0;
	i = 0;
	while (nbs && nbs[i])
		size += verif_str(nbs[i++]);
	return (size);
}

int	len_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	conv_char_int(int *num, int i, char *str)
{
	int		j;
	char	**str_num;

	str_num = ft_split_space(str);
	if (!str_num)
	{
		if (num)
			free(num);
		exit(1);
	}
	j = 0;
	while (str_num[j])
	{
		if (ft_atol(str_num[j]) < INT_MIN || ft_atol(str_num[j]) > INT_MAX)
		{
			ft_putstr_fd("Error\n", 2);
			ft_free_t(str_num);
			if (num)
				free(num);
			exit(1);
		}
		num[i++] = ft_atoi(str_num[j++]);
	}
	ft_free_t(str_num);
}

int	len_nb(char *str)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (ft_isspace(str[i]))
			i++;
		j = i;
		while (str[i] && !ft_isspace(str[i]))
			i++;
		if (j < i)
			count++;
	}
	return (count);
}

int	*creat_int_array(char **nbs, int size)
{
	int	*tab_num;
	int	i;
	int	index_tab;

	tab_num = malloc(sizeof(int) * (size + 1));
	if (!tab_num)
		exit(1);
	i = 0;
	index_tab = 0;
	while (nbs[i])
	{
		if (i == 0)
			conv_char_int(tab_num, index_tab, nbs[i]);
		else
			conv_char_int(tab_num, index_tab, nbs[i]);
		index_tab += len_nb(nbs[i]);
		i++;
	}
	return (tab_num);
}

void	check_double(int *tab_num, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab_num[i] == tab_num[j])
			{
				if (tab_num)
					free(tab_num);
				ft_putstr_fd("Error\n", 2);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

char	*split_numbers(char **nbs, t_stack *a)
{
	int	size;
	int	*tab_num;

	size = verif_numbers(nbs);
	if (size < 2)
		exit(0);
	tab_num = creat_int_array(nbs, size);
	check_double(tab_num, size);
	// int i = 0;
	// while (i < size)
	// 	ft_printf("%d, ", tab_num[i++]);
	creat_linked_list(a, tab_num, size);
	if (tab_num)
		free(tab_num);
	return (0);
}
