/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:20:41 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/12 17:18:27 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verif_sort(t_stack *n)
{
	t_node	*node;
	int		verif;

	node = n->top;
	verif = node->num;
	node = node->next;
	while (node)
	{
		if (verif > node->num)
			return (0);
		verif = node->num;
		node = node->next;
	}
	return (1);
}
