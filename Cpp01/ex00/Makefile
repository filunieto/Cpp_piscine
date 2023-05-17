# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 02:42:24 by fnieves           #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2023/02/20 11:32:49 by fnieves          ###   ########.fr        #
=======
#    Updated: 2023/02/22 12:28:05 by fnieves          ###   ########.fr        #
>>>>>>> cpp02
#                                                                              #
# **************************************************************************** #



# VPATH = src

NAME = zombie

CXX = c++
<<<<<<< HEAD
CFLAGS = -Wall -Wextra -Werror -std=c++98
=======
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -O1

>>>>>>> cpp02

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
<<<<<<< HEAD
	./zombie
=======
	./$(NAME)

val : re
	valgrind --leak-check=yes -s ./$(NAME) 
>>>>>>> cpp02
