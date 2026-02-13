/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:07:56 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/13 13:11:32 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrn(t_stack *n)
{
	t_node	*tmp_node;

	if (n->size < 2)
		return ;
	tmp_node = n->bot;
	n->bot = tmp_node->pre;
	n->bot->next = NULL;
	tmp_node->next = n->top;
	tmp_node->pre = NULL;
	n->top->pre = tmp_node;
	n->top = tmp_node;
}

void	rrb(t_stack *b)
{
	ft_printf("rrb\n");
	rrn(b);
}

void	rra(t_stack *a)
{
	ft_printf("rra\n");
	rrn(a);
}

void	rrr(t_stack *a, t_stack *b)
{
	ft_printf("rrr\n");
	rrn(a);
	rrn(b);
}
