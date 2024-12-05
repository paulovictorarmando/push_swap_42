/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 09:19:50 by parmando          #+#    #+#             */
/*   Updated: 2024/09/16 09:19:53 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int				n;
	int				index;
	struct s_stack	*next;
}	t_stack;

int		ft_stack_len(t_stack *stack);
int		find_max(t_stack *stack);
int		ft_sqrt(int num);
int		ft_init(t_stack **stack_a, char **argv);
long	ft_atoi(const char *nptr);
void	alg_sort(t_stack **stack_a, t_stack **stack_b);
void	free_argv(char **argv);
void	free_stack(t_stack **stack);
void	ft_putstr(char *s);
void	ft_mycheck(char **argv);
char	**ft_split(char const *s, char c);
void	ft_index(t_stack **stack);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_b, t_stack **stack_a);
void	sa(t_stack **stack);
void	sb(t_stack **stack);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack);
void	rb(t_stack **stack);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack);
void	rrb(t_stack **stack);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	sort_three(t_stack **stack);
void	sort_five(t_stack **stack_a, t_stack **stack_b);
void	sort_four(t_stack **stack_a, t_stack **stack_b);

#endif
