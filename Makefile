# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/23 16:22:27 by csilva            #+#    #+#              #
#    Updated: 2017/11/16 20:12:49 by csilva           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FTS = fillit utils check_input solve setup recursion pattern

CFLAGS = -Wall -Wextra -Werror

LDF = -L libft/ -lft

SRC = $(addsuffix .c, $(FTS))

OBJS = $(addsuffix .o, $(FTS))

all: $(NAME)

$(NAME): 
	@make -C libft/ all
	@gcc $(CFLAGS) $(LDF) $(SRC) -I includes -I libft/ -o $(NAME)

clean:
	@make -C libft/ clean 
	@/bin/rm -f $(OBJS)

fclean: clean
	@make -C libft/ fclean
	@/bin/rm -f $(NAME)

re: fclean all
