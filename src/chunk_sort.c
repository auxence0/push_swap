/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:18:16 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/13 11:20:59 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_or_rrev_index(t_stack *n, int index)
{
	t_node	*node;
	int		mid;
	int		i;
	int		direction;

	node = n->top;
	mid = n->size / 2;
	i = 0;
	direction = 1;
	while (node)
	{
		if (node->index == index && i <= mid)
			direction = 1;
		if (node->index == index && i > mid)
			direction = 0;
		node = node->next;
		i++;
	}
	while (n->top->index != index)
	{
		if (direction)
			rb(n);
		else
			rrb(n);
	}
}

void	chunck(t_stack *a, t_stack *b)
{
	int	n;
	int	delta;
	int	i;

	n = a->size;
	delta = n / 20 + 7;
	i = 0;
	while (a->top)
	{
		if (a->top->index <= i + delta)
		{
			pb(a, b);
			if (b->top->index <= i)
				rb(b);
			i++;
		}
		else
			ra(a);
	}
	while (b->top)
	{
		rotate_or_rrev_index(b, b->size - 1);
		pa(a, b);
	}
}
