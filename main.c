/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:37:00 by parmando          #+#    #+#             */
/*   Updated: 2024/09/13 14:37:04 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_sorted(t_stack *stack)
{
	while (stack && stack->next)
	{
		if (stack->n > stack->next->n)
			return (0);
		stack = stack->next;
	}
	return (1);
}

static void	sort_stack(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_stack_len(*stack_a) == 2)
		ra(stack_a);
	else if (ft_stack_len(*stack_a) == 3)
		sort_three(stack_a);
	else if (ft_stack_len(*stack_a) == 4)
		sort_four(stack_a, stack_b);
	else if (ft_stack_len(*stack_a) == 5)
		sort_five(stack_a, stack_b);
	else
		alg_sort(stack_a, stack_b);
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	ft_mycheck(argv);
	stack_a = NULL;
	stack_b = NULL;
	if (!ft_init(&stack_a, argv))
	{
		free_stack(&stack_a);
		free_stack(&stack_b);
		ft_putstr("Error\n");
		return (-1);
	}
	if ((!is_sorted(stack_a)) && (argc > 1))
		sort_stack(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
