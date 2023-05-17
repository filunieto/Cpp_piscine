# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 20:50:01 by fnieves-          #+#    #+#              #
#    Updated: 2023/05/04 20:20:53 by fnieves-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


VPATH = src
NAME = Materia

SRC =	main.cpp AMateria.cpp Character.cpp			\
		MateriaSource.cpp Cure.cpp Ice.cpp


CC = c++
CFLAGS = -Wextra -Wall -Werror -std=c++98

RM = rm -rfd
ODIR = obj
OBJ = $(addprefix $(ODIR)/,$(notdir $(SRC:%.cpp=%.o)))

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(ODIR)/%.o : %.cpp | $(ODIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(ODIR) :
	mkdir $(ODIR)

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

leaks:
	leaks --atExit -- ./$(NAME)