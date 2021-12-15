/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:36:03 by dong              #+#    #+#             */
/*   Updated: 2021/10/13 12:25:29 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc) and concatenates s1 and s2.
Returns:
	New string with 's1' and 's2' concatenated.
	NULL if allocation fails.*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fill;
	char	*out;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	fill = malloc(sizeof(char) * len);
	if (fill == NULL)
		return (NULL);
	out = fill;
	while (*s1)
		*fill++ = *s1++;
	while (*s2)
		*fill++ = *s2++;
	*fill = 0;
	return (out);
}
