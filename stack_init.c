/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:44:37 by parmando          #+#    #+#             */
/*   Updated: 2024/09/13 14:44:40 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_add_back(t_stack **stack, t_stack *new)
{
	t_stack	*temp;

	if (stack == NULL || new == NULL)
		return ;
	if (*stack == NULL)
	{
		*stack = new;
	}
	else
	{
		temp = *stack;
		while (temp->next)
			temp = temp -> next;
		temp -> next = new;
	}
}

static t_stack	*ft_lstnew(int n)
{
	t_stack	*new;

	new = (t_stack *) malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->index = -1;
	new->next = NULL;
	return (new);
}

static int	duplicated(t_stack **stack, int num)
{
	t_stack	*tmp;

	if (!*stack)
		return (0);
	tmp = *stack;
	while (tmp)
	{
		if (tmp->n == num)
		{
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}

int	ft_init(t_stack **stack_a, char **argv)
{
	int		j;
	char	**str;
	t_stack	*new;

	while (++argv && *argv)
	{
		str = ft_split(*argv, ' ');
		j = -1;
		while (str[++j])
		{
			new = ft_lstnew(ft_atoi(str[j]));
			if (duplicated(stack_a, ft_atoi(str[j])))
			{
				free(new);
				free_argv(str);
				return (0);
			}
			ft_add_back(stack_a, new);
		}
		free_argv(str);
	}
	ft_index(stack_a);
	return (1);
}
