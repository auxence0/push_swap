/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:08:07 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/18 15:53:41 by asauvage         ###   ########.fr       */
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
		return (0);
	split_numbers(&av[1], &a);
	if (!verif_sort(&a))
		algo_sort(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
