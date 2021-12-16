/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:11:10 by dong              #+#    #+#             */
/*   Updated: 2021/12/17 00:03:19 by dong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_numlist
{
	int					num;
	struct s_numlist	*next;
}				t_numlist;

# include "libft.h"
// push_swap.c

// validation.c
int	check_args(int argc, char **argv);

// numlists.c
t_numlist	*num_lstnew(int num);
void		num_lstadd_back(t_numlist **lst, t_numlist *new);
void		num_lstprint(t_numlist *lst);
t_numlist	*num_lstlast(t_numlist *lst);
void		num_lstclear(t_numlist **lst);

#endif
