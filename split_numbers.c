/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:12:39 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/03 16:12:40 by asauvage         ###   ########.fr       */
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
		if (str[i] == '-' || str[i] == '+')
			i++;
		while (ft_isdigit(str[i]))
			i++;
	}
}

void	verif_numbers(char **nbs)
{
	int	i;

	i = 0;
	while (nbs && nbs[i])
	{
		verif_str(nbs[i]);
	}
}

char	*split_numbers(char **nbs)
{
	char	*res;

	(void)res;
	verif_numbers(nbs);
	ft_printf("OK\n");
	return (0);
}
