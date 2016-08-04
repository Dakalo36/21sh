# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnematan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/14 15:01:22 by dnematan          #+#    #+#              #
#    Updated: 2016/07/10 13:10:04 by dnematan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strdup.c ft_strlen.c ft_memset.c ft_atoi.c ft_bzero.c ft_strcpy.c\
	  ft_strncpy.c ft_strcmp.c ft_strncmp.c ft_strstr.c  ft_strnstr.c\
	  ft_putchar.c ft_putstr.c ft_memcpy.c ft_memccpy.c ft_memchr.c\
	  ft_memmove.c ft_memdel.c ft_toupper.c ft_tolower.c ft_memalloc.c\
	  ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c\
	  ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c\
	  ft_putnbr.c ft_memcmp.c ft_strclr.c ft_strdel.c ft_strsplit.c\
	  ft_strsub.c ft_striter.c ft_striteri.c ft_strnew.c ft_strmap.c\
	  ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strtrim.c ft_strjoin.c ft_putendl.c\
	  ft_itoa.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c\
	  ft_islower.c ft_isupper.c ft_printf.c ft_printchar.c ft_convert1.c ft_printstr.c\
	  ft_inner.c ft_printdec.c ft_printnbr.c ft_isspec.c get_next_line.c

CC = gcc -Wall -Wextra -Werror

O_FILES = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) -c $(SRC) $(INC)
	ar rc $(NAME) $(O_FILES)
	ranlib $(NAME) 

clean:
	rm -f $(O_FILES)

fclean:
	rm -f $(NAME)

re:fclean all clean
