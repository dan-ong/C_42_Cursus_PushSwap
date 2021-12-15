/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:32:50 by dong              #+#    #+#             */
/*   Updated: 2021/10/13 12:58:13 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Locates first occurrence of 'c' (converted to a char) in the string
	pointed to by 's'. The terminating null character is considered to be
	part of the string that can be searched for and returned.
Returns:
	Pointer to the located character.
	NULL if the character is not found.*/
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		(s++);
	}
	if (c == 0 && *s == 0)
		return ((char *)s);
	else
		return (0);
}
