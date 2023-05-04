# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 20:50:01 by fnieves-          #+#    #+#              #
#    Updated: 2023/05/04 19:19:21 by fnieves-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME	=	materias
# CC		=	c++
# FLAGS	=	-Wall -Wextra -Werror -std=c++98

# OBJS = $(addprefix $(ODIR)/,$(notdir $(SRC:%.cpp=%.o)))
# # OBJS	= 	$(patsubst %.c, %.o, $(SRCS))
# ODIR = obj

# SRCS	=	main.cpp \
# 			AMateria.cpp \
# 			Ice.cpp \
# 			Cure.cpp \
# 			MateriaSource.cpp \
# 			Character.cpp \

# all:		$(NAME)
# # Linking
# $(NAME):	$(OBJS)
# 			@echo "\033[1;32m$(NAME)\033[1;0m\033[32m linking...\033[0m"
# 			$(CC) $(FLAGS) $(OBJS) -o $(NAME)
# 			@echo "\033[1;32m$(NAME)\033[1;0m\033[32m created.\033[0m"

# $(ODIR) :
# 	mkdir $(ODIR)

# $(ODIR)/%.o : %.cpp | $(ODIR)
# 	$(CC) $(CFLAGS) $< -o $@
# # Compiling
# # %.o:		%.c
# # 			@echo "\033[1;32m$(NAME)\033[1;0m\033[32m compiling...\033[0m"
# # 			$(CC) $(FLAGS) -c $< -o $@



# clean:
# 			@rm -rf *.o
# 			@echo "\033[31m Objects Files\033[1;31m\033[1;0m\033[31m removed.\033[0m"

# fclean: 	clean
# 			@rm -rf *.out
# 			@rm -rf *.replace
# 			@rm -f $(NAME)
# 			@echo "\033[1;31m $(NAME)\033[1;0m\033[31m removed.\033[0m"

# re: 		fclean $(NAME)

# val:
# 			valgrind --leak-check=full -s ./$(NAME)

# leaks:
# 			leaks --atExit -- ./$(NAME)




# ***************************************9
VPATH = src
NAME = Polymorphism

SRC =	main.cpp AMateria.cpp Character.cpp			\
		MateriaSource.cpp Cure.hpp Ice.hpp			\
		

CC = c++
CFLAGS = -std=c++98 -Wextra -Wall -Werror
RM = rm -rfd
ODIR = obj
OBJ = $(addprefix $(ODIR)/,$(notdir $(SRC:%.cpp=%.o)))

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(ODIR)/%.o : %.cpp | $(ODIR)
	$(CC) $(CFLAGS) $< -o $@

# mkdir $@
$(ODIR) :
	mkdir $(ODIR)

clean :
	$(RM) $(ODIR)

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