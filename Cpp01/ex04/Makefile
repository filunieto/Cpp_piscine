# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 15:53:14 by fnieves-          #+#    #+#              #
#    Updated: 2023/03/08 17:44:48 by fnieves-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Sed
VPATH = src

CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98


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

delete :
	$(RM) prueba.replace

fclean : clean delete
	$(RM) $(NAME)

re : fclean all



run : all
	./$(NAME) prueba 123 456

test : delete run

.PHONY : all clean fclean re

