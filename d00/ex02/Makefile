# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/18 12:18:09 by vbrazas           #+#    #+#              #
#    Updated: 2018/06/18 14:08:24 by vbrazas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C		=	clang++
FLAGS	=	-Wall -Wextra -Werror

NAME	=	account
RES		=	resources/
SRC		=	Account.class.cpp \
			$(RES)tests.cpp
OBJ		=	$(SRC:.cpp=.o)
INC		=	-I $(RES)


all: $(NAME)

$(NAME): $(OBJ)
	$(C) -o $(NAME) $(FLAGS) $(OBJ)

%.o: %.cpp
	$(C) $(INC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
