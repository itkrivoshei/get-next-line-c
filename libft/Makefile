# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jstaunto <jstaunto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/25 13:59:16 by jstaunto          #+#    #+#              #
#    Updated: 2020/08/25 13:59:16 by jstaunto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: NAME CC INCL FLAGS SRC OBJ all clean fclean re

NAME	= libft.a
CC		= gcc
INCL	= ./
FLAGS	= -Wall -Werror -Wextra -I $(INCL) -c

SRC		= ft_atoi.c			\
		  ft_itoa.c			\
		  ft_bzero.c		\
		  ft_lstadd.c		\
		  ft_lstdel.c		\
		  ft_lstmap.c		\
		  ft_lstnew.c		\
		  ft_memchr.c		\
		  ft_memcmp.c		\
		  ft_memcpy.c		\
		  ft_putnbr.c		\
		  ft_memset.c		\
		  ft_putstr.c		\
		  ft_strcat.c		\
		  ft_strchr.c		\
		  ft_strclr.c		\
		  ft_strcmp.c		\
		  ft_strcpy.c		\
		  ft_strdel.c		\
		  ft_strdup.c		\
		  ft_strlen.c		\
		  ft_strmap.c		\
		  ft_strstr.c		\
		  ft_strsub.c		\
		  ft_strequ.c		\
		  ft_memdel.c		\
		  ft_strnew.c		\
		  ft_putchar.c		\
		  ft_strtrim.c		\
		  ft_tolower.c		\
		  ft_toupper.c		\
		  ft_strnstr.c		\
		  ft_strrchr.c		\
		  ft_isalnum.c		\
		  ft_strmapi.c		\
		  ft_strncat.c		\
		  ft_strncmp.c		\
		  ft_strncpy.c		\
		  ft_strnequ.c		\
		  ft_isalpha.c		\
		  ft_isascii.c		\
		  ft_isdigit.c		\
		  ft_islower.c		\
		  ft_isprint.c		\
		  ft_isupper.c		\
		  ft_strjoin.c		\
		  ft_strlcat.c		\
		  ft_striter.c		\
		  ft_lstiter.c		\
		  ft_memccpy.c		\
		  ft_memmove.c		\
		  ft_putendl.c		\
		  ft_iswspace.c		\
		  ft_memalloc.c		\
		  ft_strsplit.c		\
		  ft_striteri.c		\
		  ft_lstdelone.c	\
		  ft_putstr_fd.c	\
		  ft_howmwords.c	\
		  ft_putnbr_fd.c	\
		  ft_isplwspace.c	\
		  ft_putchar_fd.c	\
		  ft_putendl_fd.c	\
		  ft_isallwspace.c	\

OBJ 	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all