# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 19:47:53 by fnieves-          #+#    #+#              #
#    Updated: 2023/02/28 20:16:01 by fnieves-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unnecessaryViolence
VPATH = src

CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

DEPFLAGS = -MT $@ -MMD -MP -MF $(DDIR)/$*.d

SRC = HumanA.cpp HumanB.cpp main.cpp Weapon.cpp

ODIR = obj
# OBJ = $(SRC:%.cpp=$(ODIR)/%.o)
OBJ = $(addprefix obj/,$(notdir $(SRC:%.cpp=%.o)))

# DDIR = $(ODIR)/.deps
# DEP =  $(SRC:%.cpp=$(DDIR)/%.d)
RM = rm -rfd

all : $(NAME)


$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)  
# $(CXX) $(CXXFLAGS) $< -o $@

# $(ODIR)/%.o : %.cpp $(DDIR)/%.d | $(ODIR) $(DDIR) Borrar
# 	$(CXX) $(CFLAGS) -c $(DEPFLAGS) $< -o $@

$(ODIR)/%.o : %.cpp  | $(ODIR) 
	$(CXX) $(CFLAGS) -c $< -o $@

$(ODIR) :
	mkdir $@

# $(DDIR) : borrar
# 	mkdir $@

clean : 
	$(RM) $(ODIR) $(DDIR)

fclean : clean
	$(RM) $(NAME)

re : fclean all

# $(DEP):
# -include $(DEP)

.PHONY : all clean fclean re
