/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:52:43 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/11 11:55:57 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *n)
{
	t_node	*tmp_node;

	while (n->top->next)
	{
		tmp_node = n->top->next;
		if (n->top)
			free(n->top);
		n->top = tmp_node;
	}
}
