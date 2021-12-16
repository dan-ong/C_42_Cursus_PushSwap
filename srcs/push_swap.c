/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:01:32 by dong              #+#    #+#             */
/*   Updated: 2021/12/17 00:07:50 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

t_numlist	*make_me_a_list(int argc, char **argv);
void		ft_lstprint(t_numlist *lst);
int			in_numlist(int num, t_numlist *numlist);

int	main(int argc, char **argv)
{
	t_numlist	*list_a;
	//t_list	*list_b;
	
	if (argc < 2 || !check_args(argc, argv))
	{
		printf("uh oh error\n");
		return (0);
	}
	list_a = make_me_a_list(argc, argv);
	if (!list_a)
	{
		printf("no duplicate numbers you nincompoop\n");
		return (0);
	}
	num_lstprint(list_a);
	// initialise list a
		// get argv
		// check if in list a
			// free list
			// return error
		// add to end
	
	// initialise list b

	// pushswapper
	// ft_putstr("pushswapper")
	return (0);
}

t_numlist	*make_me_a_list(int argc, char **argv)
{
	t_numlist	*ghost_list;
	int			i;

	ghost_list = num_lstnew(ft_atoi(argv[1]));
	i = 2;
	while (i < argc)
	{
		if (!in_numlist(ft_atoi(argv[i]), ghost_list))
		{
			printf("sausysmells and this is an error message\n");
			num_lstclear(&ghost_list);
			return (NULL);
		}
		else
		{
			num_lstadd_back(&ghost_list, num_lstnew(ft_atoi(argv[i])));
			i++;
		}
	}
	return(ghost_list);
}

int	in_numlist(int checknum, t_numlist *numlist)
{
	t_numlist	*tmp;

	if (!numlist)
		return (0);
	tmp = numlist;
	while (tmp)
	{
		if (tmp->num == checknum)
			return (0);
		tmp = tmp->next;
	}
	return(1);
}


//char	*push_swapper(list a, list b)

// do_the_swap first two elements of list (first element of list)

// do_the_push

// last_shall_be_first

// first_shall_be_last

// check list is ordered function

