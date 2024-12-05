# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: parmando <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/16 08:45:47 by parmando          #+#    #+#              #
#    Updated: 2024/09/16 08:59:21 by parmando         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = sort_three.c\
	utils.c\
	push.c\
	sort_four.c\
	reverse_rotate.c\
	sort_five.c\
	ft_atoi.c\
	ft_split.c\
	ft_args_check.c\
	free_all.c\
	swap.c\
	index.c\
	alg_sort.c\
	stack_init.c\
	main.c\
	rotate.c

NAME = push_swap
	
OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -I. -o ${NAME}

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
re: fclean all
