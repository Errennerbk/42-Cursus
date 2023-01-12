# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eerbek <eerbek@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 16:10:45 by eerbek            #+#    #+#              #
#    Updated: 2023/01/10 16:28:03 by eerbek           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk
SRCLIENT = client.c
OBJSCLIENT = $(SRCLIENT:.c=.o)

SRCSERVER = server.c
OBJSERVER = $(SRCSERVER:.c=.o)

CFLAGS = -Wall -Werror -Wextra
LIB = ./ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJSERVER) $(OBJSCLIENT)
	@make -C ./ft_printf
	@gcc -o server $(SRCSERVER) $(CFLAGS) $(LIB)
	@gcc -o client $(SRCLIENT) $(CFLAGS) $(LIB)
	
clean:
	rm -f $(OBJSERVER) $(OBJSCLIENT)
	rm -f ./ft_printf/*.OBJSCLIENT

fclean: clean
	rm -f server client
	rm -f ./ft_printf/*.o ./ft_printf/*.a

re : fclean all

.PHONY: all clean fclean re