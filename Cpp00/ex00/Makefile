# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/05 18:30:54 by fnieves           #+#    #+#              #
#    Updated: 2023/02/06 01:20: by fnieves          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

SRC			= megaphone.cpp

OBJ			= $(addprefix obj/,$(SRC:%.cpp=%.o))

CXX			= c++

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJ)
	@echo "\033[1;32m$(NAME)\033[1;0m\033[3;32m linking...\033[0m"
	@$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[1;34m$(NAME)\033[1;0m\033[3;34m created.\033[0m"


# Below rule: For each file with the extension .o in the obj
# directory that corresponds to a file with the extension .cpp,
# the following command should be executed:
# the rule compiles each .cpp file into a corresponding .o file.
# the obj/%.o target pattern ensures that the object files are
# generated in the obj directory. The | obj part specifies a
# target-level dependency on the obj directory, which ensures that
# the obj directory exists before trying to build any objectfiles.
# $< is a makefile special variable that holds the name of the first prerequisite (i.e., the source file).
# -o $@ specifies the name of the output file (i.e., the object file). 
# The $@ is a makefile special variable that holds the name of the target.
# -c tells the compiler to compile the source file and generate an object file, 
# but not to link the object files into an executable.

obj/%.o : %.cpp | obj
	@$(CXX) -c $(CPPFLAGS) $< -o $@
	@echo "\033[1;33m$(NAME)\033[1;0m\033[3;33m compiling...\033[0m"

obj :
	@mkdir obj

clean :
	@rm -drf obj
	@echo "\033[2;35m \033[1;0m\033[2;35m objects removed.\033[0m"

fclean : clean
	@rm -f $(NAME)
	@echo "\033[2;35m$(NAME)\033[1;0m\033[2;35m removed.\033[0m"

re : fclean all

.PHONY : all clean fclean







