/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:01:32 by dong              #+#    #+#             */
/*   Updated: 2021/12/20 16:44:58 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		push_swapper(&list_a, &list_b);
	ft_putstr_fd("Done\n", 1);
	// pushswapper
	// num_lstprint(list_a);
	// ft_putstr_fd("\n", 1);
	// num_lstpush(&list_a, &list_b);
	// num_lstprint(list_a);
	// ft_putstr_fd("\n", 1);
	// num_lstprint(list_b);
	// ft_putstr_fd("\n", 1);
	// num_lstswap(&list_a);
	// num_lstprint(list_a);
	// ft_putstr_fd("\n", 1);
	// num_lstrot(&list_a);
	// num_lstprint(list_a);
	// ft_putstr_fd("\n", 1);
	// num_lstrrot(&list_a);
	// num_lstprint(list_a);
	// ft_putstr_fd("\n", 1);

	return (0);
}

void	push_swapper(t_numlist **list_a, t_numlist **list_b)
{
	ft_putstr_fd("step", 1);
	if (numlst_sorted(*list_a, 'a') && numlst_sorted(*list_b, 'd'))
		num_lstpush(list_b, list_a);
	// else if ()
}

