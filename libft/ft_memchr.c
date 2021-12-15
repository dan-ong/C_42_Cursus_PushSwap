/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:05:40 by dong              #+#    #+#             */
/*   Updated: 2021/10/13 11:56:20 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Finds the first occurence of 'c' (converted to an unsigned char) in string s.
	Conversion to unsigned char removes the 'sign' bit in each char byte.
Returns:
	A pointer to the byte found, or NULL if not found within n bytes*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*out;

	ch = c;
	out = (unsigned char *)s;
	while (n > 0)
	{
		if (*out == ch)
			return ((void *)out);
		out++;
		n--;
	}
	return (0);
}
