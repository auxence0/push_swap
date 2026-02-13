/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_input_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 10:52:02 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/13 13:52:58 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	second_sort_input(char *operation, t_stack *a, t_stack *b)
{
	if (ft_strncmp(operation, "ra\n", 3))
		rn(a);
	else if (ft_strncmp(operation, "rb\n", 3))
		rn(b);
	else if (ft_strncmp(operation, "rr\n", 3))
	{
		rn(a);
		rn(b);
	}
	else if (ft_strncmp(operation, "sa\n", 3))
		sn(a);
	else if (ft_strncmp(operation, "sb\n", 3))
		sn(b);
	else if (ft_strncmp(operation, "pa\n", 3))
		pn(b, a);
	else if (ft_strncmp(operation, "pb\n", 3))
		pn(a, b);
}

void	sort_input(t_stack *a, t_stack *b)
{
	char	*operation;

	while (1)
	{
		operation = get_next_line(0);
		if (!operation)
			break ;
		if (ft_strncmp(operation, "rra\n", 4))
			rrn(a);
		else if (ft_strncmp(operation, "rrb\n", 4))
			rrn(b);
		else if (ft_strncmp(operation, "rrr\n", 4))
		{
			rrn(a);
			rrn(b);
		}
		else
			second_sort_input(operation, a, b);
		free(operation);
	}
}
