/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:09:42 by dong              #+#    #+#             */
/*   Updated: 2021/10/13 12:29:00 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Gets the length of the null terminated string 's', does not count the 
terminating null.*/
size_t	ft_strlen(const char *s)
{
	const char	*str;

	str = s;
	while (*str)
		(str++);
	return (str - s);
}
