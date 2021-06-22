# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hadufer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/18 11:05:09 by hadufer           #+#    #+#              #
#    Updated: 2021/06/22 17:13:53 by hadufer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
BIN = libft.a
SRC = $(wildcard srcs/*.c)
OBJ = $(SRC:.c=.o)
HEADER = includes/
CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re $(BIN)

all: $(BIN)

$(BIN): $(OBJ)
	ar -rcs $(BIN) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(BIN)

re: fclean all

%.o: %.c
	$(CC) -I$(HEADER) -c $(CFLAGS) $< -o $@

