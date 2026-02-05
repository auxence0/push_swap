/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:06:42 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/05 13:57:26 by asauvage         ###   ########.fr       */
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

typedef	struct s_node
{
	struct s_node	*next;
	struct s_node	*pre;
	int				num;
	int				index;
}					t_node;


typedef struct s_stack
{
	int		size;
	t_node	*top;
	t_node	*bot;
}				t_stack;

char			*split_numbers(char **nbs, t_stack *a);
char			**ft_split_space(char const *s);
long			ft_atol(const char *nptr);
void			ft_free_t(char **tab);
void		ft_free_int(int *tab);

#endif
