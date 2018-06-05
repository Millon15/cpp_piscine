# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vbrazas <vbrazas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/04 12:18:09 by vbrazas           #+#    #+#              #
#    Updated: 2018/06/05 23:27:05 by vbrazas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C		=	clang++
FLAGS	=	-Wall -Wextra -Werror

NAME	=	account
RES		=	resources/
SRC		=	Account.class.cpp \
			$(RES)tests.cpp
OBJ		=	$(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(C) -o $(NAME) $(FLAGS) $(OBJ)

%.o: %.cpp
	$(C) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
