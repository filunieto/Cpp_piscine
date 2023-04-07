# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/07 11:34:28 by fnieves           #+#    #+#              #
#    Updated: 2023/04/07 20:08:48 by fnieves          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VPATH = src
NAME = fixed

SRC = main.cpp Fixed.cpp
CC = c++
CFLAGS = -Wextra -Wall -Werror -std=c++98

RM = rm -rfd

ODIR = obj
OBJ = $(addprefix $(ODIR)/,$(notdir $(SRC:%.cpp=%.o)))

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

obj/%.o : %.cpp | obj
	$(CC) $(CFLAGS) -c $< -o $@

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