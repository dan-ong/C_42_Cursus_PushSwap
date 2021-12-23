/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:01:32 by dong              #+#    #+#             */
/*   Updated: 2021/12/24 03:23:44 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dumb(t_numlist **list_a);

int	main(int argc, char **argv)
{
	t_numlist	*list_a;
	t_numlist	*list_b;

	if (argc < 2 || !check_args(argc, argv))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	list_a = make_me_a_list(argc, argv);
	if (!list_a)
		return (0);
	list_b = NULL;
	while (!(numlst_sorted(list_a, 'a') && num_lstsize(list_b) == 0))
	{
		push_swapper(&list_a, &list_b);
	}
	return (0);
}

void	push_swapper(t_numlist **list_a, t_numlist **list_b)
{
	if (numlst_sorted(*list_a, 'a') && numlst_sorted(*list_b, 'd'))
	{
		num_lstpush(list_b, list_a);
		ft_putstr_fd("pa\n", 1);
	}
	else if ((*list_a)->num == num_lstmin(*list_a)
		&& (*list_a)->num < num_lstavg(*list_a, *list_b))
	{
		num_lstpush(list_a, list_b);
		ft_putstr_fd("pb\n", 1);
	}
	else if (num_lstsize(*list_a) >= 2
		&& (*list_a)->next->num == num_lstmin(*list_a))
	{
		num_lstswap(list_a);
		ft_putstr_fd("sa\n", 1);
	}
	else
		dumb(list_a);
}

void	dumb(t_numlist **list_a)
{
	if (num_lstloc(*list_a, num_lstmin(*list_a)) < num_lstsize(*list_a))
	{
		num_lstrot(list_a);
		ft_putstr_fd("ra\n", 1);
	}
	else
	{
		num_lstrrot(list_a);
		ft_putstr_fd("rra\n", 1);
	}
}
