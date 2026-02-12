/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:35:17 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/12 11:17:17 by asauvage         ###   ########.fr       */
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
		{
			if (rotate_or_rrev_index(a, i))
				ra(a);
			else
				rra(a);
		}
		pb(a, b);
		i++;
	}
	while (b->size > 0)
		pa(a, b);
}
