/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 19:01:20 by dong              #+#    #+#             */
/*   Updated: 2021/10/13 12:28:40 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copies up to 'dstsize' - 1 characters from the string 'src' to 'dst', 
	NUL-terminating the result if dstsize is not 0.
Returns:
	Total length of 'src'.*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = 0;
	while (*(src + srclen))
		srclen++;
	if (dstsize != 0)
	{
		while (dstsize - 1 > 0 && *src)
		{
			*dst++ = *src++;
			dstsize--;
		}
	}
	if (dstsize > 0)
		*dst = '\0';
	return (srclen);
}
