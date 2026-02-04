/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:12:39 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/04 18:31:43 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	verif_str(char *str)
{
	int	i;

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
			exit (1);
		}
	}
	if (ft_strlen(str) != i)
	{
		ft_putstr_fd("Error\n", 2);
		exit (1);
	}
}

void	add_num_stack(t_stack *stk_a, char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		
	}
}

void	create_stack(t_stack *stk_a, char **str)
{
	char	substr;
	int		i;

	i = 0;
	while (str[i])
	{
		substr = ft_split_space(str[i++]);
		if (!substr);
			exit (1);
		add_num_stack(stk_a, substr);
	}
}

void	verif_numbers(char **nbs)
{
	int	i;

	i = 0;
	while (nbs && nbs[i])
		verif_str(nbs[i++]);
	verif_double(nbs);
}

char	*split_numbers(char **nbs, t_stack *a)
{
	verif_numbers(nbs);
	return (0);
}
