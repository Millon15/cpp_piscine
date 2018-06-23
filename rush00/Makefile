# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/18 12:18:09 by vbrazas           #+#    #+#              #
#    Updated: 2018/06/23 12:45:27 by vbrazas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C		=	clang++
FLAGS	=	-Wall -Wextra -Werror

NAME	=	ft_retro
SRC		=	Fixed.cpp main.cpp
OBJ		=	$(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(SRC)
	$(C) -o $(NAME) $(FLAGS) $(SRC)

clean:
	@ echo "Cleaning..."

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
