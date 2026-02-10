/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:09:34 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/10 19:42:39 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rn(t_stack *n)
{
	t_node	*tmp_node;

	if (n->size < 2)
		return ;
	tmp_node = n->top;
	n->top = n->top->next;
	n->top->pre = NULL;
	n->bot->next = tmp_node;
	tmp_node->pre = n->bot;
	n->bot = tmp_node;
	n->bot->next = NULL;
}

void	ra(t_stack *a)
{
	ft_printf("ra\n");
	rn(a);
}

void	rb(t_stack *b)
{
	ft_printf("rb\n");
	rn(b);
}

void	rr(t_stack *a, t_stack *b)
{
	ft_printf("rr\n");
	rn(a);
	rn(b);
}
