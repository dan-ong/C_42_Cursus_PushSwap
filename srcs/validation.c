/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:58:04 by dong              #+#    #+#             */
/*   Updated: 2021/12/20 16:31:32 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Checks input arguments, number chars and '-' in first position only.*/
int	check_args(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			if (!(ft_isdigit(argv[i][j]) || argv[i][0] == '-'))
			{
				ft_putstr_fd("Error\n", 2);
				return (0);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

/* Parse args and create linked list of numbers.
	Throws error and frees list if duplicates are found.*/
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
			ft_putstr_fd("Error\n", 2);
			num_lstclear(&ghost_list);
			return (NULL);
		}
		else
		{
			num_lstadd_back(&ghost_list, num_lstnew(ft_atoi(argv[i])));
			i++;
		}
	}
	return (ghost_list);
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
	return (1);
}
