/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_4_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 11:16:11 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/13 11:17:22 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_stack(t_stack *n)
{
	int		min;
	t_node	*node;

	node = n->top;
	min = node->num;
	while (node)
	{
		if (min > node->num)
			min = node->num;
		node = node->next;
	}
	return (min);
}

int	rotate_or_rrev(t_stack *n)
{
	t_node	*node;
	int		min;
	int		mid;
	int		i;

	min = min_stack(n);
	node = n->top;
	mid = n->size / 2;
	i = 0;
	while (node)
	{
		if (node->num == min && i <= mid)
			return (1);
		if (node->num == min && i > mid)
			return (0);
		node = node->next;
		i++;
	}
	return (0);
}

void	push_min_b(t_stack *a, t_stack *b)
{
	int	min;

	min = min_stack(a);
	if (rotate_or_rrev(a))
	{
		while (a->top->num != min)
			ra(a);
	}
	else
		while (a->top->num != min)
			rra(a);
	pb(a, b);
}

void	algo_4_5(t_stack *a, t_stack *b)
{
	if (verif_sort(a))
		return ;
	if (a->size == 5)
	{
		push_min_b(a, b);
		push_min_b(a, b);
		algo_3(a);
		pa(a, b);
		pa(a, b);
	}
	else
	{
		push_min_b(a, b);
		algo_3(a);
		pa(a, b);
	}
}
