/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:12:39 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/05 14:20:11 by asauvage         ###   ########.fr       */
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

int	*conv_char_int(int *num, char *str)
{
	int		i;
	int		j;
	char	**str_num;

	i = 0;
	while (num[i])
		i++;
	str_num = ft_split_space(str);
	if (!str_num)
	{
		ft_free_int(num);
		exit(1);
	}
	j = 0;
	while (str_num[j])
	{
		if (ft_atol(str_num[j]) < INT_MIN || ft_atol(str_num[j]) > INT_MAX)
		{
			ft_free_t(str_num);
			ft_free_int(num);
			exit(1);
		}
		num[i++] = ft_atoi(str_num[j++]);
	}
	return (num);
}

int	*creat_int_array(char **nbs, int size)
{
	int	*tab_num;
	int	i;

	tab_num = ft_calloc(sizeof(int), size + 1);
	if (!tab_num)
		exit(1);
	i = 0;
	while (nbs[i])
		tab_num = conv_char_int(tab_num, nbs[i++]);
	return (tab_num);
}

void	check_double(int *tab_num)
{
	int	i;
	int	j;
	int	tmp_int;

	i = 0;
	while (tab_num[i + 1])
	{
		j = i + 1;
		tmp_int = tab_num[i++];
		while (tab_num[j])
		{
			if (tmp_int == tab_num[j++])
			{
				ft_free_int(tab_num);
				ft_putstr_fd("Error\n", 2);
				exit (1);
			}
		}
	}
}

char	*split_numbers(char **nbs, t_stack *a)
{
	int	size;
	int	*tab_num;

	(void)a;
	size = verif_numbers(nbs);
	tab_num = creat_int_array(nbs, size);
	check_double(tab_num);
	return (0);
}
