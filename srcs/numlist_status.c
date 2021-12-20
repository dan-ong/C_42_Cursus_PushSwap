/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numlist_status.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:31:13 by dong              #+#    #+#             */
/*   Updated: 2021/12/20 16:42:44 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Check if numbers in linked list are in order, in either ascending or
descending order based on char input. c == 'a' checks ascending order, 
char == 'd' checks descending order.*/
int	numlst_sorted(t_numlist *numlst, char c)
{
	t_numlist	*checker;

	if (!(c == 'a' || c == 'd'))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	if (!numlst)
		return (0);
	checker = numlst;
	if (num_lstsize(checker) == 1)
		return (1);
	while (checker->next)
	{
		if (c == 'a' && checker->num > checker->next->num)
			return (0);
		else if (c == 'd' && checker->num < checker->next->num)
			return (0);
		checker = checker->next;
	}
	return (1);
}

/* Returns the smallest number in the list. Only call on non-null list.*/
int	num_lstmin(t_numlist *numlst)
{
	t_numlist	*checker;
	int			min;

	checker = numlst;
	min = checker->num;
	while (checker)
	{
		if (checker->num < min)
			min = checker->num;
		checker = checker->next;
	}
	return (min);
}

/* Returns the biggest number in the list. Only call on non-null list.*/
int	num_lstmax(t_numlist *numlst)
{
	t_numlist	*checker;
	int			max;

	checker = numlst;
	max = checker->num;
	while (checker)
	{
		if (checker->num > max)
			max = checker->num;
		checker = checker->next;
	}
	return (max);
}