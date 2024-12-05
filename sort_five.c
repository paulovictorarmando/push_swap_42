/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:18:40 by parmando          #+#    #+#             */
/*   Updated: 2024/09/13 14:18:43 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_first(t_stack **stack_a, t_stack **stack_b, int max)
{
	if ((*stack_a)->index == max)
		pb(stack_b, stack_a);
	else if ((*stack_a)->next -> index == max)
	{
		sa(stack_a);
		pb(stack_b, stack_a);
	}
	else if ((*stack_a)->next -> next -> index == max)
	{
		ra(stack_a);
		ra(stack_a);
		pb(stack_b, stack_a);
	}
	else
	{
		rra(stack_a);
		if ((*stack_a)->index == max)
			pb(stack_b, stack_a);
		else
		{
			rra(stack_a);
			pb(stack_b, stack_a);
		}
	}
}

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	sort_first(stack_a, stack_b, find_max(*stack_a));
	sort_four(stack_a, stack_b);
	pa(stack_a, stack_b);
	ra(stack_a);
}
