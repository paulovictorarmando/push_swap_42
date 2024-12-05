/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:09:17 by parmando          #+#    #+#             */
/*   Updated: 2024/09/13 15:09:20 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stack_len(t_stack *stack)
{
	if (!stack)
		return (0);
	return (ft_stack_len(stack->next) + 1);
}

int	find_max(t_stack *stack)
{
	int	max;

	max = stack->index;
	while (stack)
	{
		if (stack->index > max)
			max = stack->index;
		stack = stack->next;
	}
	return (max);
}

int	ft_sqrt(int num)
{
	int	res;

	if (num < 4)
		return (1);
	res = 2;
	while (res * res < num)
		res++;
	if (res * res > num)
	{
		if ((res * res - num) < ((res - 1) * (res - 1) + (-num)))
			return (res);
	}
	return (res - 1);
}
