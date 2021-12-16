/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:58:04 by dong              #+#    #+#             */
/*   Updated: 2021/12/16 22:00:30 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

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
				printf("wrong format idiot\n");
				return (0);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}