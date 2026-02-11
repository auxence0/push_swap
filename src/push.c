/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:23:05 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/11 16:17:44 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pn2(t_stack *a, t_node *node)
{
	if (!a->size)
	{
		a->top = node;
		a->bot = node;
		node->pre = NULL;
		node->next = NULL;
	}
	else
	{
		node->next = a->top;
		node->pre = NULL;
		a->top->pre = node;
		a->top = node;
	}
	a->size++;
}

void	pn(t_stack *a, t_stack *b)
{
	t_node	*tmp_node;

	if (!a->size)
		return ;
	tmp_node = a->top;
	a->top = tmp_node->next;
	a->size--;
	if (!a->size)
		a->bot = NULL;
	else
		a->top->pre = NULL;
	pn2(b, tmp_node);
}

void	pa(t_stack *a, t_stack *b)
{
	ft_printf("pa\n");
	pn(b, a);
}

void	pb(t_stack *a, t_stack *b)
{
	ft_printf("pb\n");
	pn(a, b);
}
