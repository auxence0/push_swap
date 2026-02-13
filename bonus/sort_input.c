/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 10:52:02 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/13 10:52:39 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_input(t_stack *a, t_stack *b)
{
	char	*operation;

	while (1)
	{
		operation = get_next_line(0);
		if (!operation)
			break ;
		else if (ft_strcmp(operation, "ra\n"))
			rn(a);
		else if (ft_strcmp(operation, "rb\n"))
			rn(b);
		else if (ft_strcmp(operation, "rra\n"))
			rrn(a);
		else if (ft_strcmp(operation, "rrb\n"))
			rrn(b);
		else if (ft_strcmp(operation, "pa\n"))
			pn(a);
		else if (ft_strcmp(operation, "pb\n"))
			pn(b);
		else if (ft_strcmp(operation, "sa\n"))
			sn(a);
		else if (ft_strcmp(operation, "sb\n"))
			sn(b);
		free(operation);
	}
}
