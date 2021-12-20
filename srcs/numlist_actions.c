/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numlist_actions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:55:25 by dong              #+#    #+#             */
/*   Updated: 2021/12/20 16:14:11 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	num_lstpush(t_numlist **lst_from, t_numlist **lst_to)
{
	t_numlist	*tmp_a;
	t_numlist	*tmp_b;

	tmp_a = (*lst_from)->next;
	tmp_b = (*lst_from);
	(*lst_from)->next = *lst_to;
	*lst_from = tmp_a;
	*lst_to = tmp_b;
	return ;
}

void	num_lstswap(t_numlist **numlst)
{
	t_numlist	*tmp_newstart;
	t_numlist	*tmp_third;

	tmp_newstart = (*numlst)->next;
	tmp_third = (*numlst)->next->next;
	tmp_newstart->next = *numlst;
	(*numlst)->next = tmp_third;
	*numlst = tmp_newstart;
	return ;
}

void	num_lstrot(t_numlist **numlst)
{
	t_numlist	*tmp_newstart;
	t_numlist	*tmp_last;

	tmp_newstart = (*numlst)->next;
	tmp_last = num_lstlast(*numlst);
	tmp_last->next = *numlst;
	(*numlst)->next = NULL;
	*numlst = tmp_newstart;
	return ;
}

void	num_lstrrot(t_numlist **numlst)
{
	t_numlist	*tmp_last;
	t_numlist	*new_end;

	tmp_last = *numlst;
	while (tmp_last->next)
	{
		new_end = tmp_last;
		tmp_last = tmp_last->next;
	}
	new_end->next = NULL;
	tmp_last->next = *numlst;
	*numlst = tmp_last;
	return ;
}
