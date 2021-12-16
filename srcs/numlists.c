/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numlists.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:56:20 by dong              #+#    #+#             */
/*   Updated: 2021/12/17 00:07:52 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

/*Allocates with malloc and returns a new element. The new list element content
	is initialised with the number. The variable 'next' is initialized to NULL.
Returns:
	The new element*/
t_numlist	*num_lstnew(int num)
{
	t_numlist	*yep;

	yep = malloc(sizeof(t_numlist));
	if (yep)
	{
		yep->num = num;
		yep->next = NULL;
	}
	return (yep);
}

/* Adds the element 'new' at the end of the list.
Args:
	lst: address of a pointer to the first link of a list.
	new: address of a pointer to the element to be added to the list.*/
void	num_lstadd_back(t_numlist **lst, t_numlist *new)
{
	t_numlist	*end;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		new->next = NULL;
		return ;
	}
	end = num_lstlast(*lst);
	end->next = new;
}

void	num_lstprint(t_numlist *lst)
{
	t_numlist	*yep;

	if (!lst)
		return;
	yep = lst;
	while (yep)
	{
		ft_putnbr_fd(yep->num, 1);
		yep = yep->next;
	}
}

/*Finds the last element of the list.
Returns:
	Last element of the list.*/
t_numlist	*num_lstlast(t_numlist *lst)
{
	t_numlist	*yep;

	if (!lst)
		return (NULL);
	yep = lst;
	while (yep->next)
		yep = yep->next;
	return (yep);
}

/*Deletes and frees the list element passed to the function, and continues
	through the linked list, deleting and freeing until the end of the list.
	Sets the pointer to the list to NULL.*/
void	num_lstclear(t_numlist **lst)
{
	t_numlist	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	while (*lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
	lst = NULL;
	tmp = NULL;
}
