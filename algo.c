/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:16:01 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/11 11:24:52 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_2(t_stack *a)
{
	if (a->top < a->bot)
		exit (0);
	sa(a);
}

void	algo_sort(t_stack *a, t_stack *b)
{
	(void)b;
	if (a->size == 2)
		algo_2(a);
}
