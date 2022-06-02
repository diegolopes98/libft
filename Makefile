# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 19:28:32 by dieperei          #+#    #+#              #
#    Updated: 2022/06/02 20:06:30 by dieperei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ${wildcard *.c}

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

RM		= rm -f

${NAME}:	${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}
	make clean

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re: fclean all

.PHONY: ${NAME} all clean fclean re
