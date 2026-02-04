/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:08:07 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/04 18:29:45 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack *stk_a;

	ft_bzero(stk_a, sizeof(t_stack *));
	if (ac < 2)
	{
		ft_printf("No arg given\n");
		return (1);
	}
	split_numbers(&av[1], &stk_a);
	
}
