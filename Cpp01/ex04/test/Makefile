# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 15:53:14 by fnieves-          #+#    #+#              #
#    Updated: 2023/03/07 12:46:53 by fnieves-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Sed
VPATH = src

CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
# CFLAGS =  

SRC = main.cpp

ODIR = obj

OBJ = $(addprefix $(ODIR)/,$(notdir $(SRC:%.cpp=%.o)))


RM = rm -rfd

all : $(NAME)


$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $< -o $@


$(ODIR)/%.o : %.cpp  | $(ODIR) 
	$(CXX) $(CFLAGS) -c $< -o $@

$(ODIR) :
	mkdir $@

clean : 
	$(RM) $(ODIR) test.out

fclean : clean
	$(RM) $(NAME)

re : fclean all

delete :
	$(RM) prueba.replace

run : re
	./$(NAME) prueba 123 456

test : delete run

.PHONY : all clean fclean re

