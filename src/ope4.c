/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <mszlicht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:42:17 by mszlicht          #+#    #+#             */
/*   Updated: 2024/08/26 17:03:34 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	ft_rr(t_list **stack)
{
	t_list	*tmp;
	t_list	*end;

	if (!(*stack) || !((*stack)->next))
		return ;
	tmp = *stack;
	end = ft_lstlast(*stack);
	while ((*stack)->next->next)
		*stack = (*stack)->next;
	end->next = tmp;
	(*stack)->next = NULL;
	*stack = end;
}

void	rra(t_list **stack1)
{
	ft_rr(stack1);
	write(1, "rra\n", 4);
}

void	rrb(t_list **stack2)
{
	ft_rr(stack2);
	write(1, "rrb\n", 4);
}
