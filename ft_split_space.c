/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_space.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:11:53 by asauvage          #+#    #+#             */
/*   Updated: 2026/02/10 14:28:39 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	count_w(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] && ft_isspace(s[i]))
			i++;
		j = i;
		while (s[i] && !ft_isspace(s[i]))
			i++;
		if (j < i)
			count++;
	}
	return (count);
}

static int	free_memo(char **res, int pos)
{
	if (res[pos] != NULL)
		return (1);
	while (pos >= 0)
	{
		free(res[pos]);
		pos--;
	}
	free(res);
	return (0);
}

char	**ft_split_space(char const *s)
{
	char	**res;
	int		i[3];

	res = malloc(sizeof(char *) * (count_w(s) + 1));
	if (res == NULL)
		return (0);
	i[1] = 0;
	i[2] = 0;
	while (s[i[1]] != '\0')
	{
		while (s[i[1]] && ft_isspace(s[i[1]]))
			i[1]++;
		i[0] = i[1];
		while (s[i[1]] && !ft_isspace(s[i[1]]))
			i[1]++;
		if (i[0] < i[1])
		{
			res[i[2]] = ft_substr(s, i[0], i[1] - i[0]);
			if (free_memo(res, i[2]++) != 1)
				return (0);
		}
	}
	res[i[2]] = 0;
	return (res);
}
