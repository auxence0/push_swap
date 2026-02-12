/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:18:16 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/12 12:56:28 by asauvage         ###   ########.fr       */
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

void	move_to_b(t_stack *a, t_stack *b, int top_index, int bot_index)
{
	if ( )
}

void	chunck(t_stack *a, t_stack *b)
{
	int	top_index;
	int	bot_index;
	int	index;

	index = 0;
	while (a->size > 0)
	{
		top_index = search_top(a, index + 20);
		bot_index = search_bot(a, index + 20);
		move_to_b(a, b, top_index, bot_index);
		index++;
	}
}
