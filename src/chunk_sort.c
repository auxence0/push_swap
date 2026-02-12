/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:18:16 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/12 15:46:25 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	search_top(t_stack *a, int index)
{
	t_node	*node;

	node = a->top;
	while (node)
	{
		if (node->index <= index)
			return (node->index);
		node = node->next;
	}
	return (0);
}

int	search_bot(t_stack *a, int index)
{
	t_node	*node;

	node = a->bot;
	while (node)
	{
		if (node->index <= index)
			return (node->index);
		node = node->pre;
	}
	return (0);
}

void	rotate_or_rrev_index(t_stack *n, int index)
{
	t_node	*node;
	int		mid;
	int		i;

	node = n->top;
	mid = n->size / 2;
	i = 0;
	while (node)
	{
		if (node->index == index && i <= mid)
			i = 1;
		if (node->index == index && i > mid)
			i = 0;
		node = node->next;
	}
	while (n->top->index != index)
	{
		if (i)
			ra(n);
		else
			rra(n);
	}
}

// void	move_to_b(t_stack *a, t_stack *b, int top_index, int bot_index)
// {
// 	t_node	*node;
// 	int		dir;

// 	node = a->top;
// 	if (top_index < bot_index)
// 		bot_index = top_index;
// 	sort_b(b);
// 	rotate_or_rrev_index(a, bot_index);
// 	pb(a, b);
// 	rotate_or_rrev_index(a, top_index);
// 	pb(a,b);
// }

void	chunck(t_stack *a, t_stack *b)
{
    int n;
    int delta;
    int i;

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
