# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cking <cking@student.wethinkcode.co.za>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/16 11:19:38 by cking             #+#    #+#              #
#    Updated: 2018/08/20 16:44:09 by cking            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1= checker

NAME2= push_swap

all:	$(NAME1) $(NAME2)

lib:	
	make re -C ./libft/
	make clean -C ./libft/

SRC1= checker.c push.c swap.c revrot.c rot.c functions.c functions2.c functions3.c\
extra_functions.c functions4.c

SRC2= push_swap.c push.c swap.c revrot.c rot.c functions.c functions2.c functions3.c\
extra_functions.c functions4.c

OBJ1= $(SRC1:.c=.o)

OBJ2= $(SRC2:.c=.o)

$(NAME1):
		gcc -Wall -Werror -Wextra -c $(SRC1)
		gcc -o $(NAME1) $(OBJ1) -L. ./libft/libft.a

$(NAME2):
		gcc -Wall -Werror -Wextra -c $(SRC2)
		gcc -o $(NAME2) $(OBJ2) -L. ./libft/libft.a

clean:
		rm -f *.o

fclean:		clean
		rm -rf $(NAME1)
		rm -rf $(NAME2)

re:		fclean all
		make clean