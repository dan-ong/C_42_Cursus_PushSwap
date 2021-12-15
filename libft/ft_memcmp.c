/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:30:41 by dong              #+#    #+#             */
/*   Updated: 2021/10/13 12:03:05 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Compares byte string s1 to byte string s2. Both are assumed to be 'n'
bytes long.
Returns:
	0 if strings are identical. Zero length strings are always identical.
	If different, returns difference between first two different bytes
	(treated as unsigned char values).*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*str1 != *str2)
			return ((int)(*str1) - (int)(*str2));
		str1++;
		str2++;
		n--;
	}
	return (0);
}
