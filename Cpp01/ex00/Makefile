# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 02:42:24 by fnieves           #+#    #+#              #
#    Updated: 2023/02/22 12:28:05 by fnieves          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



# VPATH = src

NAME = zombie

CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -O1


SRC = 	main.cpp	\
		Zombie.cpp	\
		newZombie.cpp	\
		randomChump.cpp	\

# OBJ =  $(addprefix obj/, $(notdir$(SRC:%.cpp=%.o))) 
OBJ = $(patsubst %.c, %.o, $(SRC))

all : $(NAME)

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

r : re
	./$(NAME)

val : re
	valgrind --leak-check=yes -s ./$(NAME) 