/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:20:02 by parmando          #+#    #+#             */
/*   Updated: 2024/09/13 15:20:04 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_rotate(t_stack **stack, int max)
{
	int		i;
	t_stack	*tmp;

	tmp = *stack;
	i = 0;
	while (tmp)
	{
		if (tmp->index == max)
			break ;
		tmp = tmp->next;
		i++;
	}
	return (i);
}

static int	get_reverse(t_stack **stack, int max)
{
	return (ft_stack_len(*stack) - get_rotate(stack, max) - 1);
}

static void	sort_one(t_stack **a, t_stack **b)
{
	int	len;
	int	pivo;
	int	index;

	len = ft_stack_len(*a);
	pivo = ft_sqrt(len) * 14 / 10;
	index = 0;
	while (*a)
	{
		if ((*a)->index <= index)
		{
			pb(b, a);
			rb(b);
			index++;
		}
		else if ((*a)->index <= (index + pivo))
		{
			pb(b, a);
			index++;
		}
		else
			ra(a);
	}
}

static void	sort_two(t_stack **a, t_stack **b)
{
	int	rotate;
	int	reverse;
	int	max;

	while (*b)
	{
		max = find_max(*b);
		reverse = get_reverse(b, max) + 1;
		rotate = get_rotate(b, max);
		if (rotate > reverse)
		{
			while ((*b)->index != max)
				rrb(b);
		}
		else
		{
			while ((*b)->index != max)
				rb(b);
		}
		pa(a, b);
	}
}

void	alg_sort(t_stack **stack_a, t_stack **stack_b)
{
	sort_one(stack_a, stack_b);
	sort_two(stack_a, stack_b);
}
