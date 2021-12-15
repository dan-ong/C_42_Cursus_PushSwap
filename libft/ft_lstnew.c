/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:44:10 by dong              #+#    #+#             */
/*   Updated: 2021/10/13 11:53:32 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates with malloc and returns a new element. The new list element content
	is initialised with the value of the parameter 'content'. The variable 
	'next' is initialized to NULL.
Returns:
	The new element*/
t_list	*ft_lstnew(void *content)
{
	t_list	*yep;

	yep = malloc(sizeof(t_list));
	if (yep)
	{
		yep->content = content;
		yep->next = NULL;
	}
	return (yep);
}
