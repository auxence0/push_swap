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

void	verif_numbers(char **nbs)
{
	int	i;
	int	j;

	i = 0;
	while (nbs && nbs[i])
	{
		j = 0;
		while (nbs[i][j])
		{
			while (ft_isspace(nbs[i][j]))
				j++;
			if (nbs[i][j] == '-' || nbs[i][j] == '+')
				j++;
			while (ft_isdigit(nbs[i][j]))
				j++;
			if (!ft_isspace(nbs[i][j]))
				break ;
		}
		ft_printf("%d, %d\n", ft_strlen(nbs[i]), j);
		if (ft_strlen(nbs[i]) != (size_t)j)
		{
			ft_printf("Error list numbers\n");
			exit(1);
		}
		i++;
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
