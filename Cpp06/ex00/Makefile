# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/18 13:33:06 by fnieves           #+#    #+#              #
#    Updated: 2023/06/18 13:52:31 by fnieves          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VPATH = src
NAME = exercice

SRC = main.cpp

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rdf
# ODIR = obj
OBJ = $(addprefix obj/, $(notdir $(SRC:%.cpp=%.o)))

all : $(NAME)

$(NAME) = $(OBJ)
	$(CC) $(CFLAGS) $< -o $@

$(OBJ) : %.cpp | obj
	$(CC) $(CFLAGS) -c $< -o $@

obj :
	mkdir obj

clean :
	$(RM) $(ODIR)/


fclean : clean
	$(RM) $(NAME)


re : fclean all


.PHONY : re clean fclean all


run : re
	./$(NAME)
	make fclean


test : re
	./$(NAME)

val:
	valgrind --leak-check=full -s ./$(NAME)

