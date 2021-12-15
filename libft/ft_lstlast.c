/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 23:18:06 by dong              #+#    #+#             */
/*   Updated: 2021/10/13 11:51:19 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Finds the last element of the list.
Returns:
	Last element of the list.*/
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*yep;

	if (!lst)
		return (NULL);
	yep = lst;
	while (yep->next)
		yep = yep->next;
	return (yep);
}
