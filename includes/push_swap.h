/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong <dong@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:11:10 by dong              #+#    #+#             */
/*   Updated: 2021/12/20 16:43:27 by dong             ###   ########.fr       */
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
void	push_swapper(t_numlist **list_a, t_numlist **list_b);

// validation.c
int			check_args(int argc, char **argv);
t_numlist	*make_me_a_list(int argc, char **argv);
int			in_numlist(int num, t_numlist *numlist);

// numlists.c
t_numlist	*num_lstnew(int num);
void		num_lstadd_back(t_numlist **lst, t_numlist *new);
void		num_lstprint(t_numlist *lst);
t_numlist	*num_lstlast(t_numlist *lst);
void		num_lstclear(t_numlist **lst);

// numlist_actions.c
void	num_lstpush(t_numlist **lst_from, t_numlist **lst_to);
void	num_lstswap(t_numlist **numlst);
void	num_lstrot(t_numlist **numlst);
void	num_lstrrot(t_numlist **numlst);
int		num_lstsize(t_numlist *lst);

// debugging.c
void	num_lstprint(t_numlist *lst);

// numlist_status.c
int	numlst_sorted(t_numlist *numlst, char c);
int	num_lstmin(t_numlist *numlst);
int	num_lstmax(t_numlist *numlst);

#endif
