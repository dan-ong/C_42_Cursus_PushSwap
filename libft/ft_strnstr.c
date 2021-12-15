/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:21:30 by dong              #+#    #+#             */
/*   Updated: 2021/10/13 12:32:06 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Locates the first occurence of the null-terminated string 'needle' in the
	string 'haystack', where not more than 'len' characters are searched.
	Characters that appear after a '\0' character are not searched.
Returns:
	If 'needle' is empty, returns haystack.
	If 'needle' does not occur in 'haystack', returns NULL.
	If found, returns pointer to first occurrence of 'needle' in 'haystack'.*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;

	if (!(*needle))
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		if (*haystack == *needle)
		{
			i = 0;
			while (*(haystack + i) == *(needle + i) && len - i > 0)
			{
				if (!*(needle + i + 1))
					return ((char *)haystack);
				i++;
			}
		}
		len--;
		(haystack++);
	}
	return (0);
}
