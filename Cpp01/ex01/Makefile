# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/19 20:02:18 by fnieves           #+#    #+#              #
#    Updated: 2023/02/19 20:22:51 by fnieves          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VPATH = src

NAME = zombie

CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	main.cpp	\
		Zombie.cpp	\

OBJ =  $(addprefix obj/, $(notdir$(SRC:%.cpp=%.o))) 

all :

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)


obj/%.o : %.cpp | obj
	$(CXX) $(CFLAGS) -c $< -o $@

obj:
	mkdir obj

clean :
	rm -rfd obj

fclean : clean
	rm $(NAME)

re : fclean all

.PHONY : all clean fclean