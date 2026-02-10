/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:23:05 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/10 19:39:33 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pn(t_stack *a, t_stack *b)
{
	t_node *tmp_node;

	tmp_node = a->top;
	if (!b->size)
		return ;
	a->top = b->top;
	a->top->pre = NULL;
	a->top->next = tmp_node;
	if (a->size)
		tmp_node->pre = a->top;
	else
	{
		a->bot = a->top;
		a->bot->pre = NULL;
		a->bot->next = NULL;
	}
	b->top = b->top->next;
	b->top->pre = NULL;
	b->size--;
	a->size++;
	if (!b->size)
		b->bot = NULL;
}

void	pa(t_stack *a, t_stack *b)
{
	ft_printf("pa\n");
	pn(a, b);
}

void	pb(t_stack *a, t_stack *b)
{
	ft_printf("pb\n");
	pn(b, a);
}
