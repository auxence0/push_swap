/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:09:38 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/11 15:15:07 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sn(t_stack *n)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;

	if (n->size < 2)
		return ;
	first = n->top;
	second = first->next;
	third = second->next;
	n->top = second;
	second->pre = NULL;
	second->next = first;
	first->pre = second;
	if (n->size == 2)
	{
		first->next = NULL;
		n->bot = first;
	}
	else
	{
		first->next = third;
		third->pre = first;
	}
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
