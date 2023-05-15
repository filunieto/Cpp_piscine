# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 21:03:11 by fnieves-          #+#    #+#              #
#    Updated: 2023/05/15 16:18:57 by fnieves-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VPATH = src
NAME = Bureaucrat

SRC = 	main.cpp Bureaucrat.cpp \

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

val:
	valgrind --leak-check=full -s ./$(NAME)

leaks:
	leaks --atExit -- ./$(NAME)

# VPATH = src includes
# NAME = Bureaucrat

# CC = c++
# # CFLAGS = -Wall -Wextra -Werror -std=c++98
# CFLAGS = -Wall -Wextra -Werror -std=c++98


# SRC = main.cpp Bureaucrat.cpp

# RM = rm -rfd
# ODIR = obj
# OBJ = $(addprefix $(ODIR)/, $(notdir $(SRC:%.cpp=%.o)))

# all : $(NAME)

# $(NAME) : $(OBJ)
# 	$(CC) $(CFLAGS) $< -o $@

# $(ODIR)/%.o : %.cpp | $(ODIR)
# 	$(CC) $(CFLAGS) -c $< -o $@

# $(ODIR) :
# 	mkdir obj

# clean :
# 	$(RM) $(ODIR)

# fclean : clean
# 	$(RM) $(NAME)

# re : fclean all

# run : re
# 	./$(NAME)
# 	make fclean

# val:
# 	valgrind --leak-check=full -s ./$(NAME)

# leaks:
# 	leaks --atExit -- ./$(NAME)