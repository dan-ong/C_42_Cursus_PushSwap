/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:02:46 by dong              #+#    #+#             */
/*   Updated: 2021/10/13 11:06:14 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Calculates length of base 10 number*/
static int	ft_numlen(int n)
{
	int	numlen;

	numlen = 0;
	while (n != 0)
	{
		n = n / 10;
		numlen++;
	}
	return (numlen);
}

/*Allocates with malloc and returns a string representing the integer 'n'.
	Handles negative numbers.
Returns:
	String representing the integer.
	NULL if allocation fails.*/
char	*ft_itoa(int n)
{
	int				numlen;
	unsigned int	nb;
	char			*out;

	numlen = ft_numlen(n);
	out = ft_calloc(numlen + 2, sizeof(char));
	if (!out)
		return (NULL);
	if (n < 0)
	{
		nb = -n;
		*out = '-';
		numlen++;
	}
	else
		nb = n;
	if (nb == 0)
		*out = '0';
	while (nb > 0)
	{
		*(out + numlen - 1) = (nb % 10 + '0');
		nb = nb / 10;
		numlen--;
	}
	return (out);
}
