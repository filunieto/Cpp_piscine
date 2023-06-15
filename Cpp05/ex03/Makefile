# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/23 21:18:14 by fnieves-          #+#    #+#              #
#    Updated: 2023/06/15 13:11:56 by fnieves          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VPATH = src
NAME = Bureaucrat

SRC = 	main.cpp Bureaucrat.cpp ShrubberyCreationForm.cpp 	\
		PresidentialPardonForm.cpp RobotomyRequestForm.cpp 	\
		AForm.cpp Intern.cpp

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
	$(RM) $(NAME) ./Bender_shrubbery
	

re : fclean all

.PHONY : re clean fclean all

run : re
	./$(NAME)


check : re
	./$(NAME)
	make fclean

val: run
	valgrind --leak-check=full -s ./$(NAME)