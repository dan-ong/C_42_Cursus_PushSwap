/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:54:53 by dong              #+#    #+#             */
/*   Updated: 2021/10/13 12:02:56 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copies 'len' bytes from string 'src' to 'dst'. The two strings may overlap, 
non-destructive copying is used.
Returns:
	Original value of dst (address of dst string).*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dptr;
	const char	*sptr;

	if (dst == NULL && src == NULL)
		return (dst);
	if (dst - src > 0)
	{
		dptr = (char *)(dst + len - 1);
		sptr = (const char *)(src + len - 1);
		while (len-- > 0)
			*(dptr--) = *(sptr--);
	}
	else
	{
		dptr = (char *)dst;
		sptr = (const char *)src;
		while (len-- > 0)
			*dptr++ = *sptr++;
	}
	return (dst);
}
