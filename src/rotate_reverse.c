/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:07:56 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/11 14:21:55 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrn(t_stack *n)
{
	t_node	*tmp_node;

	tmp_node = n->bot;
	n->bot = n->bot->pre;
	n->bot->next = NULL;
	n->top->pre = tmp_node;
	tmp_node->next = n->bot;
	tmp_node->pre = NULL;
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
	rra(a);
	rra(b);
}
