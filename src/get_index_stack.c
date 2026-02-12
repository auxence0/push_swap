/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:28:59 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/12 17:23:37 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_index(t_stack *stack)
{
	t_node	*node;
	t_node	*cmp;
	int		index;

	node = stack->top;
	while (node)
	{
		index = 0;
		cmp = stack->top;
		while (cmp)
		{
			if (cmp->num < node->num)
				index++;
			cmp = cmp->next;
		}
		node->index = index;
		node = node->next;
	}
}
