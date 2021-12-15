/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:38:50 by dong              #+#    #+#             */
/*   Updated: 2021/10/13 12:23:59 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates sufficient memory for a copy of the string s1 and makes a copy.
Returns:
	Copy of the string s1 if malloc is successful. 
	NULL if not successful.*/
char	*ft_strdup(const char *s1)
{
	char	*dst;
	char	*r;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (NULL);
	r = dst;
	while (len > 0)
	{
		*dst++ = *s1++;
		len--;
	}
	*dst = 0;
	return (r);
}
