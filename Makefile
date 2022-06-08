# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 19:28:32 by dieperei          #+#    #+#              #
#    Updated: 2022/06/08 16:37:29 by dieperei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
			ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
			ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
			ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
			ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \

SRCS_B	= ft_lstnew.c
			
OBJS	= ${SRCS:.c=.o}

OBJS_B	= ${SRCS_B:.c=.o}

NAME	= libft.a

RM		= rm -f

all:	${NAME}

bonus:	${NAME}

${NAME}:	${OBJS} ${OBJS_B}
	ar rcs ${NAME} ${OBJS} ${OBJS_B}

clean:
	${RM} ${OBJS} ${OBJS_B}

fclean:	clean
	${RM} ${NAME}

re: fclean all

.c.o:	${SRCS} ${SRCS_B}
	cc -Werror -Wextra -Wall -c ${SRCS} ${SRCS_B}

.PHONY: ${NAME} all clean fclean re
