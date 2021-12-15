/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 01:01:42 by dong              #+#    #+#             */
/*   Updated: 2021/10/13 11:21:35 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Iterates through 'lst' and applies 'f' to the content of each element.
	Creates a new list resulting from the successive applications of 'f'.
	The del function is used to delete the contents if a malloc fails.
Args:
	*lst: pointer to element in linked list.
	*(*f): function pointer to modify content of 'lst'.
	*del: function pointer to delete content of new list.
Returns:
	New list. NULL if allocation fails.*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mapped;
	t_list	*link;
	t_list	*trav;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	mapped = ft_lstnew(f(lst->content));
	tmp = mapped;
	trav = lst->next;
	while (trav)
	{
		link = ft_lstnew(f(trav->content));
		if (!link)
		{
			ft_lstclear(&mapped, del);
			return (NULL);
		}
		tmp->next = link;
		tmp = tmp->next;
		trav = trav->next;
	}
	return (mapped);
}
