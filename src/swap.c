/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:09:38 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/10 18:22:11 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sn(t_stack *n)
{
	t_node	*tmp_node;

	tmp_node = n->top;
	n->top = n->top->next;
	tmp_node->next = n->top->next;
	tmp_node->pre = n->top;
	n->top->next = tmp_node;
	n->top->pre = NULL;
}

void	sa(t_stack *a)
{
	ft_printf("sa\n");
	sn(a);
}

void	sb(t_stack *b)
{
	ft_printf("sb\n");
	sn(b);
}
void	ss(t_stack *a, t_stack *b)
{
	ft_printf("ss\n");
	sn(a);
	sn(b);
}
