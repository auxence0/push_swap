/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:16:01 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/11 14:15:53 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_2(t_stack *a)
{
	if (a->top->num > a->bot->num)
		sa(a);
}

void	algo_3(t_stack *a)
{
	int	first;
	int	second;
	int	last;

	first = a->top->num;
	second = a->top->next->num;
	last = a->bot->num;
	if (first < second && second > last && first < last)
	{
		sa(a);
		ra(a);
	}
	if (first > second && second < last && first < last)
		sa(a);
	if (first < second && second > last && first > last)
		rra(a);
	if (first > second && second < last && first > last)
		sa(a);
	if (first > second && second > last && first > last)
	{
		sa(a);
		rra(a);
	}
}

void	algo_sort(t_stack *a, t_stack *b)
{
	(void)b;
	if (a->size == 2)
		algo_2(a);
	if (a->size == 3)
		algo_3(a);
}
