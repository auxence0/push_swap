/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:06:42 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/18 13:37:54 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

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
int					verif_numbers(char **nbs);
char				**ft_split_space(char const *s);
long				ft_atol(const char *nptr);
int					len_tab(char **tab);
int					len_nb(char *str);
int					verif_sort(t_stack *n);
int					min_stack(t_stack *n);
int					rotate_or_rrev(t_stack *n);
int					sort_input(t_stack *a, t_stack *b);
void				ft_free_t(char **tab);
void				ft_free_int(int *tab);
void				pb(t_stack *a, t_stack *b);
void				pa(t_stack *a, t_stack *b);
void				pn(t_stack *a, t_stack *b);
void				sa(t_stack *a);
void				sb(t_stack *b);
void				sn(t_stack *n);
void				ss(t_stack *a, t_stack *b);
void				rrr(t_stack *a, t_stack *b);
void				rra(t_stack *a);
void				rrb(t_stack *b);
void				rrn(t_stack *n);
void				ra(t_stack *a);
void				rb(t_stack *b);
void				rn(t_stack *n);
void				rr(t_stack *a, t_stack *b);
void				create_linked_list(t_stack *a, int *nb, int size);
void				algo_sort(t_stack *a, t_stack *b);
void				free_stack(t_stack *n);
void				get_index(t_stack *stack);
void				bubble_sort(t_stack *a, t_stack *b);
void				chunck(t_stack *a, t_stack *b);
void				algo_2(t_stack *a);
void				algo_3(t_stack *a);
void				algo_4_5(t_stack *a, t_stack *b);

#endif
