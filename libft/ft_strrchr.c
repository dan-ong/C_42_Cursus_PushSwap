/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:21:34 by dong              #+#    #+#             */
/*   Updated: 2021/10/22 17:36:12 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Locates the last occurrence of 'c' (converted to a char), in the string
	pointed to by 's'. The terminating null character is treated as part of the
	string (i.e. if c == 0, the function locates the terminating 0).
Returns:
	A pointer 'r' to the located character, or
	NULL if the character does not appear in the string.*/
char	*ft_strrchr(const char *s, int c)
{
	char	*r;

	r = 0;
	while (*s)
	{
		if (*s == c)
			r = (char *)s;
		s++;
	}
	if (c == 0)
		r = (char *)s;
	return (r);
}
