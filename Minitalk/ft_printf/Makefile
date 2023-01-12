# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eerbek <eerbek@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 16:33:12 by eerbek            #+#    #+#              #
#    Updated: 2023/01/10 16:27:11 by eerbek           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
FLAG = -Wall -Wextra -Werror
SRC = $(shell find . -name "ft_*.c")

all: $(NAME)

$(NAME):
		$(CC) $(FLAG) -c $(SRC)
		ar rcs $(NAME) *.o
clean:
		rm -f *.o
fclean:
		rm -f $(NAME) *.o

re: fclean all