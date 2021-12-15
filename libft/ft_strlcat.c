/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:38:26 by dong              #+#    #+#             */
/*   Updated: 2021/10/13 12:27:43 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Concatenates src onto dst and nul terminates as long as there is at least
	1 byte free in dst. The function first checks that there is at least 
	1 byte available for the terminating null, while moving the destination 
	pointer to the end of the dest string.
	If there is room for nul terminator, go through dest string, copying from
	source and then nul terminate.
Returns:
	Length of destination + length of source.*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		dlen;

	d = dst;
	s = src;
	n = dstsize;
	while (*d && n--)
		d++;
	dlen = d - dst;
	n = dstsize - dlen;
	if (n == 0)
		return (dlen + ft_strlen(src));
	while (*s && n > 1)
	{
		*d++ = *s++;
		n--;
	}
	*d = 0;
	return (dlen + ft_strlen(src));
}
