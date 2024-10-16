/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <mszlicht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:42:17 by mszlicht          #+#    #+#             */
/*   Updated: 2024/08/26 17:03:25 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	pa(t_list **stack1, t_list **stack2)
{
	t_list	*push_b;

	if (!*stack2)
		return ;
	push_b = (*stack2)->next;
	(*stack2)->next = *stack1;
	*stack1 = *stack2;
	*stack2 = push_b;
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_list **stack1, t_list **stack2)
{
	t_list	*push_a;

	if (!*stack1)
		return ;
	push_a = (*stack1)->next;
	(*stack1)->next = *stack2;
	*stack2 = *stack1;
	*stack1 = push_a;
	ft_putstr_fd("pb\n", 1);
}
