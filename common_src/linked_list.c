/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:37:21 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/11 11:50:36 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*creat_node(long num)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->num = num;
	node->index = -1;
	node->pre = NULL;
	node->next = NULL;
	return (node);
}

void	push_bottom(t_stack *a, t_node *node)
{
	if (!a->top)
	{
		a->top = node;
		a->bot = node;
		node->next = NULL;
		node->pre = NULL;
	}
	else
	{
		a->bot->next = node;
		node->pre = a->bot;
		node->next = NULL;
		a->bot = node;
	}
}

void	creat_linked_list(t_stack *a, int *nb, int size)
{
	int		i;
	t_node	*node;

	a->size = size;
	i = 0;
	while (i < size)
	{
		node = creat_node(nb[i]);
		if (!node)
		{
			if (nb)
				free(nb);
			exit (1);
		}
		push_bottom(a, node);
		i++;
	}
}
