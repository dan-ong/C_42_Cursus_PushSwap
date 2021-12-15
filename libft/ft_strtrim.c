/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:22:02 by dong              #+#    #+#             */
/*   Updated: 2021/10/13 12:34:17 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates with malloc and returns a copy of 's1' with the characters
specified in 'set' removed from the beginning and end of the string.
Returns:
	The trimmed string.
	NULL if the allocation fails.*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*start;
	char	*out;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL || ft_strlen(set) == 0)
		return (ft_strdup(s1));
	start = (char *)s1;
	while (*start && ft_strchr(set, *start))
		start++;
	len = ft_strlen(start);
	while (*(start + len - 1) && ft_strchr(set, *(start + len - 1)) && len > 0)
		len--;
	if (len == 0)
		return (ft_strdup(""));
	out = (char *)malloc(sizeof(char) * (len + 1));
	if (out == NULL)
		return (NULL);
	ft_strlcpy(out, start, len + 1);
	return (out);
}
