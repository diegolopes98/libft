# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 19:28:32 by dieperei          #+#    #+#              #
#    Updated: 2022/06/01 00:57:19 by dieperei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			ft_strlcpy.c ft_strlen.c ft_memset.c ft_bzero.c ft_toupper.c \
			ft_tolower.c ft_strncmp.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

RM		= rm -f

${NAME}:	${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re: fclean all

.PHONY: ${NAME} all clean fclean re
