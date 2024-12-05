/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:27:24 by parmando          #+#    #+#             */
/*   Updated: 2024/09/13 12:28:03 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*min_stack(t_stack *stack)
{
	t_stack	*tmp;
	t_stack	*res;
	int		is_first;

	is_first = 0;
	tmp = stack;
	while (tmp)
	{
		if ((tmp->index == -1) && (!is_first || tmp->n < res->n))
		{
			res = tmp;
			is_first = 1;
		}
		tmp = tmp->next;
	}
	return (res);
}

void	ft_index(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*a;
	int		index;

	tmp = *stack;
	index = 0;
	while (tmp)
	{
		a = min_stack(*stack);
		a->index = index;
		index++;
		tmp = tmp->next;
	}
}
