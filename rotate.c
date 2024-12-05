/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:53:05 by parmando          #+#    #+#             */
/*   Updated: 2024/09/13 14:53:08 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	first = *stack;
	*stack = (*stack)->next;
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
}

void	ra(t_stack **stack)
{
	if ((*stack)->next)
	{
		rotate(stack);
		ft_putstr("ra\n");
	}
}

void	rb(t_stack **stack)
{
	if ((*stack)->next)
	{
		rotate(stack);
		ft_putstr("rb\n");
	}
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->next && (*stack_b)->next)
	{
		rotate(stack_a);
		rotate(stack_b);
		ft_putstr("rr\n");
	}
}
