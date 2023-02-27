# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 11:37:34 by fnieves           #+#    #+#              #
#    Updated: 2023/02/27 12:12:06 by fnieves          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# En make run >>> rm: cannot remove 'program': No such file or directory
# make: *** [Makefile:36: fclean] Error 1
VPATH = src


CC = g++
CFLAGS = -Wextra -Werror -Wall -std=c++98
NAME = program

SRC = main.cpp
# OBJ = $(patsubst %.c, %.o, $(SRC))
# OBJ =  $(addprefix obj/, $(notdir$(SRC:%.cpp=%.o))) 
OBJ = $(SRC:%.cpp=%.o)


all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	
# obj/%.o : %.cpp | obj
# 	$(CXX) $(CFLAGS) -c $< -o $@

obj :
	mkdir obj

clean :
	rm -drf $(OBJ)
	
fclean : clean
	rm -f $(NAME)

re : fclean all
	

run : re
	./$(NAME)

.PHONY : all clean fclean
