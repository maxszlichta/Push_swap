/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <mszlicht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:42:17 by mszlicht          #+#    #+#             */
/*   Updated: 2024/08/26 17:03:37 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "../libft/libft.h"
# include <limits.h>

typedef struct s_push
{
	int	next;
	int	max;
	int	mid;
	int	flag;
}	t_push;

typedef struct s_swap
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		asize;
	int		bsize;
}		t_swap;

void	check_sort(t_swap	*tab);
int		check_sorting(t_list **stack1);
int		check_sorting_a(t_list **stack1, int count);
t_list	*find_min_lst(t_list **stack);
t_list	*find_max_lst(t_list **stack);
int		isrevsorted(t_swap	*tab);

void	pa(t_list **stack1, t_list **stack2);
void	pb(t_list **stack1, t_list **stack2);
void	ra(t_list **stack1);
void	rb(t_list **stack2);
void	rr(t_list **stack1, t_list **stack2);
void	sa(t_list **stack1);
void	sb(t_list **stack2);
void	ss(t_list **stack1, t_list **stack2);
void	rrb(t_list **stack2);
void	rra(t_list **stack1);

void	add_index(t_list *lst);

void	quick_sort(t_list **stack1, t_list **stack2, int count);
#endif