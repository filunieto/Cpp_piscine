# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 02:42:24 by fnieves           #+#    #+#              #
#    Updated: 2023/02/22 15:15:05 by fnieves          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



# VPATH = src

NAME = zombie

CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -O1


SRC = 	main.cpp		\
		Zombie.cpp		\
		zombieHorde.cpp \
		# newZombie.cpp	\
		# randomChump.cpp	\

# OBJ =  $(addprefix obj/, $(notdir$(SRC:%.cpp=%.o))) 
OBJ = $(patsubst %.c, %.o, $(SRC))

all : $(NAME)

$(NAME) : $(SRC)
	$(CXX) $(CFLAGS) $(SRC) -o $(NAME)

#  Por qué no necesito estas reglas? No necesito crear los .o?
# $(NAME) : $(OBJ)
# 	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

# obj/%.o : %.cpp | obj
# 	$(CXX) $(CFLAGS) -c $< -o $@

obj:
	mkdir obj

clean :
	rm -rfd obj

fclean : clean
	rm $(NAME)

re : fclean all

.PHONY : all clean fclean

run : re
	./$(NAME)

val : re
	valgrind --leak-check=yes -s ./$(NAME) 

# Si no existe el ejecutale, $(NAME) , y hago un make re hay problemas
#  por que al no poder borrar un archivo que no existe se para 