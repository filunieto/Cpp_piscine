# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/07 11:34:28 by fnieves           #+#    #+#              #
#    Updated: 2023/04/14 15:00:49 by fnieves-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VPATH = src
NAME = fixedP

SRC = main.cpp Fixed.cpp Point.cpp
CC = c++
CFLAGS = -Wextra -Wall -Werror -std=c++98
INCLUDE = -I include

RM = rm -rfd

ODIR = obj
OBJ = $(addprefix $(ODIR)/,$(notdir $(SRC:%.cpp=%.o)))

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

obj/%.o : %.cpp | obj
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

obj :
	mkdir obj

clean :
	$(RM) obj/

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : re clean fclean all

run : re
	./$(NAME)

val:
	valgrind --leak-check=full -s ./$(NAME)

leaks:
	leaks --atExit -- ./$(NAME)

