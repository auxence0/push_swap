/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:09:38 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/12 13:35:32 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sn(t_stack *n)
{
	t_node	*fst;
	t_node	*sec;
	t_node	*third;

	if (n->size < 2)
		return ;
	fst = n->top;
	sec = fst->next;
	third = sec->next;
	n->top = sec;
	sec->pre = NULL;
	sec->next = fst;
	fst->pre = sec;
	if (n->size == 2)
	{
		fst->next = NULL;
		n->bot = fst;
	}
	else
	{
		fst->next = third;
		third->pre = fst;
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
