# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 19:47:53 by fnieves-          #+#    #+#              #
#    Updated: 2023/03/01 18:23:51 by fnieves-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unnecessaryViolence
VPATH = src

CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = HumanA.cpp HumanB.cpp main.cpp Weapon.cpp

ODIR = obj
# OBJ = $(SRC:%.cpp=$(ODIR)/%.o)
OBJ = $(addprefix obj/,$(notdir $(SRC:%.cpp=%.o)))


RM = rm -rfd

all : $(NAME)


$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)  
# $(CXX) $(CXXFLAGS) $< -o $@


$(ODIR)/%.o : %.cpp  | $(ODIR) 
	$(CXX) $(CFLAGS) -c $< -o $@

$(ODIR) :
	mkdir $@

clean : 
	$(RM) $(ODIR) 

fclean : clean
	$(RM) $(NAME)

re : fclean all


run : re
	./$(NAME)

.PHONY : all clean fclean re
