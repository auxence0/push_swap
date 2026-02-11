/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:06:42 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/11 11:56:14 by asauvage         ###   ########.fr       */
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

typedef struct s_node
{
	struct s_node	*next;
	struct s_node	*pre;
	int				num;
	int				index;
}					t_node;

typedef struct s_stack
{
	int				size;
	t_node			*top;
	t_node			*bot;
}					t_stack;

char				*split_numbers(char **nbs, t_stack *a);
int					verif_str(char *str);
int					verif_numbers(char **nbs);
char				**ft_split_space(char const *s);
long				ft_atol(const char *nptr);
int					*creat_int_array(char **nbs, int size);
int					len_tab(char **tab);
int					len_nb(char *str);
void				ft_free_t(char **tab);
void				ft_free_int(int *tab);
void				pb(t_stack *a, t_stack *b);
void				pa(t_stack *a, t_stack *b);
void				sa(t_stack *a);
void				sb(t_stack *b);
void				ss(t_stack *a, t_stack *b);
void				rrr(t_stack *a, t_stack *b);
void				rra(t_stack *a);
void				rrb(t_stack *b);
void				ra(t_stack *a);
void				rb(t_stack *b);
void				rr(t_stack *a, t_stack *b);
void				creat_linked_list(t_stack *a, int *nb, int size);
void				algo_sort(t_stack *a, t_stack *b);
void				free_stack(t_stack *n);

#endif
