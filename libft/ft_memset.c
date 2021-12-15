/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:19:17 by dong              #+#    #+#             */
/*   Updated: 2021/10/13 12:02:01 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Writes 'len' bytes of value 'c' (converted to an unsigned char) to the string
'b'.
Returns:
	Pointer to 'b'.*/
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dong;

	dong = b;
	while (len > 0)
	{
		*dong = (unsigned char)c;
		(dong++);
		len--;
	}
	return (b);
}
