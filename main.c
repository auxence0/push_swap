/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:08:07 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/05 13:46:40 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack *stk_a;

	stk_a = NULL;
	if (ac < 2)
	{
		ft_printf("No arg given\n");
		return (1);
	}
	split_numbers(&av[1], stk_a);
	
}
