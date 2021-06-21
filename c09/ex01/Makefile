# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hadufer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/18 11:05:09 by hadufer           #+#    #+#              #
#    Updated: 2021/06/21 20:24:40 by hadufer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
SRC = $(wildcard srcs/*.c)
OBJ = $(SRC:.c=.o)
HEADER = $(wildcard includes/*.h)
CFLAGS = -Wall -Wextra -Werror

all: $(OBJ)
	ar -rcs libft.a $(OBJ)

re: fclean all

clean:
	rm $(OBJ)

fclean: clean
	rm libft.a

%.o: $.c
	$(CC) $(CFLAGS) $(OBJ) -c -o $@ $< -I$(HEADER)
