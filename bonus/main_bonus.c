/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 10:23:52 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/13 18:59:40 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;

	ft_bzero(&a, sizeof(t_stack));
	ft_bzero(&b, sizeof(t_stack));
	if (ac < 2)
	{
		ft_printf("No arg given\n");
		return (1);
	}
	split_numbers(&av[1], &a);
	if (sort_input(&a, &b))
	{
		if (verif_sort(&a) && !b.size)
			ft_putstr_fd("OK\n", 1);
		else
			ft_putstr_fd("KO\n", 1);
	}
	else
		ft_putstr_fd("Error\n", 2);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
