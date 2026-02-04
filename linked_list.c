/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:37:21 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/04 16:10:36 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*first_node(t_stack *node)
{
	while (node->pre)
		node = node->pre;
	return (node);
}

t_stack	*top_node(t_stack *node)
{
	while (node->next)
		node = node->next;
	return (node);
}

void	add_num_node(t_stack *node, long num)
{
	t_stack	*new_node;

	new_node = creat_node(num);
	node = top_node(node);
	node->next = new_node;
	new_node->pre = node;
	new_node->nb = num;
	new_node->next = NULL;
}

t_stack	*creat_node(long num)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (0);
	node->nb = num;
	node->index = -1;
	node->pre = NULL;
	node->next = NULL;
}
