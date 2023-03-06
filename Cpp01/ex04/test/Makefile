# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 15:53:14 by fnieves-          #+#    #+#              #
#    Updated: 2023/03/06 13:01:18 by fnieves          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Sed
VPATH = src

CXX = c++
# CFLAGS = -Wall -Wextra -Werror -std=c++98 paraMac cambiar
CFLAGS =  

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


# VPATH = src


# CC = c++
# CFLAGS = -Wall -Wextra -Werror -std=c++98

# DOBJ = obj
# NAME = Sed
# RM = rm -rdf
# SRC = main.cpp

# OBJ = $(addprefix obj/, $(notdir $(SRC:%.cpp=%.o)))

# all : $(NAME)

# $(NAME) : $(OBJ)
# 	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	
# $(DOBJ) :
# 	mkdir obj

# $(DOBJ)%.o : %.cpp | obj
# 	$(CC) $(CFLAGS)  -c  $< -o $@

# clean :
# 	$(RM) $(DOBJ)

# fclean : clean
# 	$(RM) $(NAME)

# re : fclean all

# run : re
# 	./$(NAME)

# .PHONY : all clean fclean re




