# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 14:35:45 by fnieves-          #+#    #+#              #
#    Updated: 2023/04/16 21:23:22 by fnieves          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VPATH = src
NAME = Claptrap

SRC = main.cpp ClapTrap.cpp
CC = c++
CFLAGS = -Wextra -Wall -Werror -std=c++98
INCLUDE = -I include
RM = rm -rfd

ODIR = obj

# $(notdir $(SRC:%.cpp=%.o)): this is the object
#  file list without the directory names
OBJ = $(addprefix $(ODIR)/,$(notdir $(SRC:%.cpp=%.o)))

all : $(NAME)

$(NAME) : $(OBJ)
	 $(CC) $(CFLAGS) $(OBJ) -o $(NAME)

obj/%.o : %.cpp | obj
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
# el pipe dice que lo de la derecha tiene que existir para que se ejecute

obj :
	mkdir obj

clean :
	$(RM) obj/

fclean : clean
	$(RM) $(NAME)


re : fclean all

run : re
	./$(NAME)
	make fclean

val:
	valgrind --leak-check=full -s ./$(NAME)

leaks:
	leaks --atExit -- ./$(NAME)