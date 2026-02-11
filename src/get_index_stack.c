/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:28:59 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/11 16:46:32 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_index(t_stack *stack)
{
	t_node	*nb;
	t_node	*cmp;
	int		index;

	nb = stack->top;
	while (nb)
	{
		index = 0;
		cmp = stack->top;
		while (cmp)
		{
			if (cmp->num < nb->num)
				index++;
			cmp = cmp->next;
		}
		nb->index = index;
		nb = nb->next;
	}
}
