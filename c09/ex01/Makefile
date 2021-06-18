# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hadufer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/18 11:05:09 by hadufer           #+#    #+#              #
#    Updated: 2021/06/18 11:26:30 by hadufer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
BIN = bin
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
INCLUDE = ./includes

all : $(BIN)

%.o : %.c
	$(CC) -c -Wall -Wextra -Werror ./srcs/$(SRC) -I$(INCLUDE)

$(BIN) : $(OBJ)
	$(CC) -o $@ $^

clean :
	rm -rf ./srcs/*.o

fclean : clean

