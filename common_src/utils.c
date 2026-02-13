/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:20:17 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/13 11:22:41 by asauvage         ###   ########.fr       */
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

int	len_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	len_nb(char *str)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (ft_isspace(str[i]))
			i++;
		j = i;
		while (str[i] && !ft_isspace(str[i]))
			i++;
		if (j < i)
			count++;
	}
	return (count);
}
