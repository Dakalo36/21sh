# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnematan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/14 14:39:36 by dnematan          #+#    #+#              #
#    Updated: 2016/08/07 12:14:04 by dnematan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 21sh

DEBUG = no
ifeq ($(DEBUG),no)
	FLAGS = -Wall -Werror -Wextra
else
	FLAGS = -g3
endif
SRC = *.c
OBJ = $(SRC:.c=.o)
INC = 21sh.h

.SILENT:

all :	$(NAME)

$(NAME) :
ifeq ($(DEBUG),yes)
	echo "\\033[1;31mDEGUG COMPILATION... (no flags except -g)\\033[0;39m"
else
	echo "\\033[1;31mCompilation with -Wall -Wextra -Werror...\\033[0;39m"
endif
	echo "\\033[1;34mGenerating objects... Please wait.\\033[0;39m"
		Make -C libft/
		gcc $(FLAGS) -o $(NAME) $(SRC) libft/libft.a 
		echo "$(NAME) created!"

clean :
	make clean -C libft/
	rm -rf $(OBJ)
	echo "cleaned"

fclean : clean
	make fclean -C libft/
	rm -rf $(NAME)
	echo "$(NAME) removed"

re :fclean all
