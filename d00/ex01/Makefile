# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vbrazas <vbrazas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/04 12:18:09 by vbrazas           #+#    #+#              #
#    Updated: 2018/06/04 21:33:00 by vbrazas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C		=	clang++
FLAGS	=	-Wall -Wextra -Werror

NAME	=	phonebook
SRC		=	phonebook.cpp phonebook.class.cpp 
OBJ		=	$(SRC:.cpp=.o)


all: $(OBJ)
	$(C) -o $(NAME) $(FLAGS) $(OBJ)

%.o: %.c
	$(C) $(FLAGS) -c $@ -o $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
