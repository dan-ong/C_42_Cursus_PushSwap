/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:31:51 by dong              #+#    #+#             */
/*   Updated: 2021/10/13 12:03:23 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Replication of standard isspace function.*/
static int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

/*Converts string to integer, ignores leading space characters.*/
int	ft_atoi(const char *str)
{
	const char	*s;
	long		result;
	int			neg;

	neg = 1;
	s = str;
	result = 0;
	while (*s && ft_isspace(*s))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			neg = -1;
		s++;
	}
	while (*s && (*s >= '0' && *s <= '9'))
	{
		result = 10 * result + *s - '0';
		s++;
	}
	return (result * neg);
}
