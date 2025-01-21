# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkuznets <vkuznets@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/09 13:55:00 by vkuznets          #+#    #+#              #
#    Updated: 2024/05/16 09:24:04 by vkuznets         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf
SRC = ft_print_hex.c \
	ft_print_pointer.c \
	ft_printf.c \
	ft_printf_utils.c  \
	ft_print_unsigned_dec.c 

OBJECTS = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
