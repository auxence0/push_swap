/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:35:17 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/11 17:40:07 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while (a->size > 0)
	{
		while (a->top->index != i)
			ra(a);
		pb(a, b);
		i++;
	}
	while (b->size > 0)
	{
		pa(a, b);
	}
}
