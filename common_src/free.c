/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:20:17 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/11 17:50:45 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_t(char **tab)
{
	int	i;

	i = 0;
	if (tab)
	{
		while (tab[i])
			free(tab[i++]);
		free(tab);
	}
}

void	free_stack(t_stack *n)
{
	t_node	*tmp_node;

	while (n->top)
	{
		tmp_node = n->top->next;
		if (n->top)
			free(n->top);
		n->top = tmp_node;
	}
	n->bot = NULL;
}
