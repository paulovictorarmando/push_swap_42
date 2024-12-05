/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:20:01 by parmando          #+#    #+#             */
/*   Updated: 2024/09/13 14:20:06 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_stack **stack_a, t_stack **stack_b)
{
	int	max;

	max = find_max(*stack_a);
	if ((*stack_a)->index == max)
		pb(stack_b, stack_a);
	else if ((*stack_a)->next -> index == max)
	{
		sa(stack_a);
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
	sort_three(stack_a);
	pa(stack_a, stack_b);
	ra(stack_a);
}
