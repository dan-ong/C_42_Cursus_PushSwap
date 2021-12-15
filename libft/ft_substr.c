/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:28:25 by dong              #+#    #+#             */
/*   Updated: 2021/10/22 15:15:01 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates with malloc and returns a substring from the string 's'.
	The substring begins at index 'start' and is of max size 'len'.
Returns:
	The substring. NULL if allocation fails.
	Returns null character if start > strlen(s).*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;

	if (s == NULL)
		return (NULL);
	out = (char *)malloc(sizeof(char) * (len + 1));
	if (out == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		out[0] = 0;
		return (out);
	}
	ft_strlcpy(out, (s + start), len + 1);
	return (out);
}
