/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:06:42 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/04 16:01:30 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef INT_MAX
#  define INT_MAX 2147483647

# endif

# ifndef INT_MIN
#  define INT_MIN -2147483648

# endif

# include "libft/libft.h"

typedef struct s_stack
{
	long	nb;
	int		index;
	t_stack	pre;
	t_stack	next;
}				t_stack;

char			*split_numbers(char **nbs, t_stack *a);
char			**ft_split_space(char const *s);
long			ft_atol(const char *nptr);

#endif
