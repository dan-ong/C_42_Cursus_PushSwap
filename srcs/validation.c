/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:58:04 by dong              #+#    #+#             */
/*   Updated: 2021/12/24 23:36:47 by dong             ###   ########.fr       */
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
		if (num_checkatoi(argv[i]) == 0)
			return (0);
		while (argv[i][j])
		{
			if (!(ft_isdigit(argv[i][j]) || (j == 0 && argv[i][0] == '-')))
				return (0);
			j++;
		}
		if (j > 11)
			return (0);
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

/*Converts string to integer and checks if overflow occurs.
	Returns 0 if overflow condition is met.*/
int	num_checkatoi(const char *str)
{
	const char	*s;
	long		result;
	int			neg;
	int			hasnum;

	neg = 1;
	s = str;
	result = 0;
	hasnum = 0;
	if (*s == '-')
	{
		neg = -1;
		s++;
	}
	while (*s && (*s >= '0' && *s <= '9'))
	{
		result = 10 * result + *s - '0';
		hasnum = 1;
		s++;
	}
	result *= neg;
	if (result > 2147483647 || result < -2147483648 || hasnum == 0)
		return (0);
	return (1);
}
