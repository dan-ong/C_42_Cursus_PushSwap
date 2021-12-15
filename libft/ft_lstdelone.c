/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 00:16:04 by dong              #+#    #+#             */
/*   Updated: 2021/10/13 11:49:54 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Takes a list element and frees the memory of the element's content using
	the function 'del', then frees the list element.
	If 'del' is NULL, the list element is still freed.
Args:
	lst: element to free.
	del: address of the function used to delete the content.*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
	lst = NULL;
}
