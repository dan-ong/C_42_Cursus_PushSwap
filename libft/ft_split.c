/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:44:32 by dong              #+#    #+#             */
/*   Updated: 2021/10/13 12:39:38 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Counts the number of words created by splitting string 's' by 'c'.*/
static int	ft_wordcount(char const *s, char c)
{
	int			count;
	char const	*p;

	count = 0;
	p = s;
	while (*p)
	{
		if (*p != c && (*(p + 1) == c || !*(p + 1)))
			count++;
		p++;
	}
	return (count);
}

/* Returns a pointer to the next delimiter OR '\0' value.*/
static char	*ft_strdelim(char const *s, char c)
{
	char const	*p;

	p = s;
	while (*p)
	{
		if (*p == c)
			return ((char *)p);
		(p++);
	}
	return ((char *)p);
}

/* Return a NULL array if a malloc error occurs when substrings are made.*/
static char	**ft_mallerr(char **arr)
{
	int	i;

	i = 0;
	while (*(arr + i))
	{
		free(*(arr + i));
		i++;
	}
	free (arr);
	return (NULL);
}

/* Allocates with malloc and returns an array of strings obtained by splitting
's' using 'c' as a delimiter. Str array ends with NULL pointer.
Returns:
	Array of strings, terminated with null pointer.
	NULL if allocation fails.*/
char	**ft_split(char const *s, char c)
{
	char const	*p;
	char		**arr;
	char		**out;

	if (s == NULL)
		return (NULL);
	p = s;
	arr = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (arr == NULL)
		return (NULL);
	out = arr;
	while (*p)
	{
		if (*p != c)
		{
			*arr = ft_substr(s, (p - s), (ft_strdelim(p, c) - p));
			if (*arr == NULL)
				return (ft_mallerr(out));
			p = ft_strdelim(p, c) - 1;
			arr++;
		}
		p++;
	}
	*arr = 0;
	return (out);
}
