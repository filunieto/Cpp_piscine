# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 13:52:51 by fnieves           #+#    #+#              #
#    Updated: 2023/03/07 13:34:47 by fnieves-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VPATH = src
NAME = Harl

SRC = 	main.cpp Harl.cpp

CC = c++
CFLAGS = -Wextra -Wall -Werror -std=c++98

RM = rm -rfd

ODIR = obj
OBJ = $(addprefix $(ODIR)/,$(notdir $(SRC:%.cpp=%.o)))

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o  $@

obj/%.o : %.cpp | obj
	$(CC) $(CFLAGS) -c $<  -o $@

obj :
	mkdir obj

clean :
	$(RM) obj/

fclean : clean
	$(RM) $(NAME)

re : fclean all


run : re
	./$(NAME)

.PHONY : all clean fclean re
