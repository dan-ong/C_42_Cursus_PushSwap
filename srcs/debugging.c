/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debugging.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:15:34 by dong              #+#    #+#             */
/*   Updated: 2021/12/20 16:14:29 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	num_lstprint(t_numlist *lst)
{
	t_numlist	*yep;

	if (!lst)
		return ;
	yep = lst;
	while (yep)
	{
		ft_putnbr_fd(yep->num, 1);
		yep = yep->next;
	}
	return ;
}
