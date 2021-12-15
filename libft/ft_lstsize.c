/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 22:43:28 by dong              #+#    #+#             */
/*   Updated: 2021/10/13 11:55:02 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Counts the number of elements in a list.*/
int	ft_lstsize(t_list *lst)
{
	int			yep;
	t_list		*oki;

	if (!lst)
		return (0);
	oki = lst;
	yep = 0;
	while (oki)
	{
		oki = oki->next;
		yep++;
	}
	return (yep);
}
