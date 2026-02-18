/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:20:41 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/18 13:10:38 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verif_sort(t_stack *n)
{
	t_node	*node;
	int		verif;

	node = n->top;
	verif = node->num;
	node = node->next;
	while (node)
	{
		if (verif > node->num)
			return (0);
		verif = node->num;
		node = node->next;
	}
	return (1);
}

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
	{
		if (!ft_strlen(nbs[i]))
		{
			ft_putstr_fd("Error \n", 2);
			exit (1);
		}
		i++;
	}
	i = 0;
	while (nbs && nbs[i])
		size += verif_str(nbs[i++]);
	return (size);
}
