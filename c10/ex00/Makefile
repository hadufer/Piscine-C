# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hadufer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/22 18:29:09 by hadufer           #+#    #+#              #
#    Updated: 2021/06/23 08:42:15 by hadufer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_display_file

SRCS	= main.c \
		  ft_read_file.c \
		  utils.c 

OBJS	= ${SRCS:.c=.o}

HEADER	= includes

CC		= gcc
RM		= rm -f
AR		= ar rcs

CFLAGS = -Wall -Wextra -Werror

%.o: %.c
			${CC} -c ${CFLAGS} -o $@ $<

all:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

.PHONY:	all clean fclean re
