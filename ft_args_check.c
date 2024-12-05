/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:31:15 by parmando          #+#    #+#             */
/*   Updated: 2024/09/13 15:31:17 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_argone(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (!(argv[i] >= '0' && argv[i] <= '9')
			&& (argv[i] != '+' && argv[i] != '-'))
			return (-1);
		else if (argv[i] == '-' && !(argv[i + 1] >= '0'
				&& argv[i + 1] <= '9'))
			return (-1);
		else if (argv[i] == '+' && !(argv[i + 1] >= '0'
				&& argv[i + 1] <= '9'))
			return (-1);
		else if ((argv[i] >= '0' && argv[i] <= '9')
			&& (argv[i + 1] == '-' || argv[i + 1] == '+'))
			return (-1);
		i++;
	}
	return (1);
}

static int	ft_check_len(char *str)
{
	long	tmp;

	tmp = ft_atoi(str);
	if (tmp < -2147483648 || tmp > 2147483647)
		return (-1);
	return (1);
}

void	ft_mycheck(char **argv)
{
	int		j;
	char	**str;

	while (++argv && *argv)
	{
		str = ft_split(*argv, ' ');
		j = -1;
		if (!*str)
		{
			free_argv(str);
			ft_putstr("Error\n");
			exit(-1);
		}
		while (str[++j])
		{
			if ((ft_argone(str[j]) == -1) || (ft_check_len(str[j]) == -1))
			{
				free_argv(str);
				ft_putstr("Error\n");
				exit(-1);
			}
		}
		free_argv(str);
	}
}
