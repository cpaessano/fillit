# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/18 16:29:27 by csilva            #+#    #+#              #
#    Updated: 2017/11/10 15:09:12 by csilva           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FTS = 	ft_putchar \
		ft_putstr \
		ft_putnbr \
		ft_strlen \
		ft_strcmp \
		ft_atoi \
		ft_tolower \
		ft_toupper \
		ft_isprint \
		ft_isascii \
		ft_isalnum \
		ft_isalpha \
		ft_isdigit \
		ft_strncmp \
		ft_strcpy \
		ft_strncpy \
		ft_islower \
		ft_isupper \
		ft_strcat \
		ft_strncat \
		ft_strlcat \
		ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memccpy \
		ft_memmove \
		ft_memmove \
		ft_memchr \
		ft_memcmp \
		ft_memalloc \
		ft_strdup \
		ft_strchr \
		ft_strrchr \
		ft_strstr \
		ft_strnstr \
		ft_memdel \
		ft_strnew \
		ft_strdel \
		ft_strclr \
		ft_striter \
		ft_striteri \
		ft_strmap \
		ft_strmapi \
		ft_strequ \
		ft_strnequ \
		ft_strsub \
		ft_strjoin \
		ft_putendl \
		ft_iswhitespace \
		ft_strtrim \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \
		ft_nbr_size \
		ft_itoa \
		ft_strsplit \
		ft_lstnew \
		ft_lstdelone \
		ft_lstdel \
		ft_lstadd \
		ft_lstiter \
		ft_lstmap

SRC = $(addsuffix .c, $(FTS))
OUT = $(addsuffix .o, $(FTS))

#CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc  $(CFLAGS) -c $(SRC) -I ./
	@ar rcs $(NAME) $(OUT)

clean:
	@/bin/rm -f $(OUT)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
