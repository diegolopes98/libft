# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 19:28:32 by dieperei          #+#    #+#              #
#    Updated: 2022/06/07 17:18:59 by dieperei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
		ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_tolower.c ft_toupper.c ft_strlen.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_split.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

RM		= rm -f

all:	${NAME}

${NAME}:	${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re: fclean all

.c.o:	${SRCS}
	cc -Werror -Wextra -Wall -c ${SRCS}

.PHONY: ${NAME} all clean fclean re
