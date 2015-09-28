#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evoisin <evoisin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/17 22:29:36 by evoisin           #+#    #+#              #
#    Updated: 2015/02/28 19:22:29 by evoisin          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = push_swap

SRC = pushswap.c del_list.c needs_sort.c misc.c operations.c new_list.c add_list.c dealing_with_errors.c
OBJ = $(SRC:%.c=%.o)

HEAD = pushswap.h

CFLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJ)
	@gcc $(CFLAGS) $(SRC) -o $(NAME)
	@echo "\033[1;32;40m Done. \033[0m"

all : $(NAME)

clean : 
		@rm -f $(OBJ)

fclean : clean
		@rm -rf $(NAME)
		@echo "\033[1;32;40m Propre. \033[0m"

re : fclean all 
