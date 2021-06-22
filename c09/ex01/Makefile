# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hadufer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/18 11:05:09 by hadufer           #+#    #+#              #
#    Updated: 2021/06/22 11:49:38 by hadufer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
BIN = libft.a
SRC = $(wildcard srcs/*.c)
OBJ = $(SRC:.c=.o)
HEADER = includes/
CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re $(BIN)

all: libft.a

libft.a: $(OBJ)
	ar -rcs libft.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(BIN)

re: fclean all

%.o: %.c
	$(CC) -I$(HEADER) -c $(CFLAGS) $< -o $@

