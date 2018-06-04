# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vbrazas <vbrazas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/04 12:18:27 by vbrazas           #+#    #+#              #
#    Updated: 2018/06/04 12:18:29 by vbrazas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C		=	clang++
FLAGS	=	-Wall -Wextra -Werror

NAME	=	megaphone
SRC		=	megaphone.cpp
OBJ		=	$(SRC:.cpp=.o)


all: $(OBJ)
	$(C) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(C) $(FLAGS) -c $@ -o $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
