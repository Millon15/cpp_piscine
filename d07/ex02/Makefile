# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/28 19:24:02 by vbrazas           #+#    #+#              #
#    Updated: 2018/06/27 17:25:06 by vbrazas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = array

SRC_PATH = #./
INC_PATH = ./
OBJ_PATH = obj/

C = clang++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic
IFLAGS = -I $(INC_PATH)
LFLAGS = #-lncurses

FILES = main

SRCS = $(addprefix $(SRC_PATH), $(addsuffix .cpp, $(FILES)))
OBJ = $(addprefix $(OBJ_PATH), $(SRCS:%.cpp=%.o))


all: $(NAME)

$(NAME): $(OBJ)
	$(C) $(CFLAGS) $(LFLAGS) $(IFLAGS) $(OBJ) -o $(NAME)

$(OBJ): | $(OBJ_PATH)

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)$(SRC_PATH)

$(OBJ_PATH)%.o: %.cpp
	$(C) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)
	rm -rf $(OBJ_PATH)

re: fclean all

.PHONY: all clean fclean re
