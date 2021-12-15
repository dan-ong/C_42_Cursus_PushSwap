/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:33:32 by dong              #+#    #+#             */
/*   Updated: 2021/10/13 11:04:08 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Contiguously allocates enough space for 'count' objects that are 'size'
	bytes of memory each and returns a pointer to the allocated memory.
	Allocated memory is filled with bytes of value zero.
RETURNS: 
	If successful, returns pointer to allocated memory
	If error, return NULL pointer.*/
void	*ft_calloc(size_t count, size_t size)
{
	size_t	mallocme;
	void	*out;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	mallocme = count * size;
	out = malloc(mallocme);
	if (out == NULL)
		return (NULL);
	out = ft_memset(out, 0, mallocme);
	return (out);
}
