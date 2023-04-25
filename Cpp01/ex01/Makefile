# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
<<<<<<< HEAD
#    By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 02:42:24 by fnieves           #+#    #+#              #
#    Updated: 2023/02/28 19:40:04 by fnieves-         ###   ########.fr        #
=======
#    By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 02:42:24 by fnieves           #+#    #+#              #
#    Updated: 2023/02/22 15:15:05 by fnieves          ###   ########.fr        #
>>>>>>> cpp02
#                                                                              #
# **************************************************************************** #



# VPATH = src

NAME = zombie

CXX = c++
<<<<<<< HEAD
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	main.cpp	\
		Zombie.cpp	\
		# newZombie.cpp	\


# The makefile variable SRC  contains a list of source files with 
# the .c extension. The $(patsubst %.c, %.o, $(SRC)) function call 
# takes this list of source files and replaces the extension .c with .o to
#  generate a list of object files with the same names as the source files.
# The resulting list of object files is then assigned to the makefile variable OBJ.
# added for commit test
OBJ = $(patsubst %.cpp, %.o, $(SRC))
# OBJ = SRC:%.cpp= %.o

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)


obj/%.o : %.cpp | obj
	$(CXX) $(CFLAGS) -c $< -o $@
=======
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -O1


SRC = 	main.cpp		\
		Zombie.cpp		\
		zombieHorde.cpp \
		# newZombie.cpp	\
		# randomChump.cpp	\

# OBJ =  $(addprefix obj/, $(notdir$(SRC:%.cpp=%.o))) 
OBJ = $(patsubst %.c, %.o, $(SRC))

all : $(NAME)

$(NAME) : $(SRC)
	$(CXX) $(CFLAGS) $(SRC) -o $(NAME)

#  Por qué no necesito estas reglas? No necesito crear los .o?
# $(NAME) : $(OBJ)
# 	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

# obj/%.o : %.cpp | obj
# 	$(CXX) $(CFLAGS) -c $< -o $@
>>>>>>> cpp02

obj:
	mkdir obj

clean :
	rm -rfd obj

fclean : clean
	rm $(NAME)

re : fclean all

.PHONY : all clean fclean

<<<<<<< HEAD
r : re
	./zombie
=======
run : re
	./$(NAME)

val : re
	valgrind --leak-check=yes -s ./$(NAME) 

# Si no existe el ejecutale, $(NAME) , y hago un make re hay problemas
#  por que al no poder borrar un archivo que no existe se para 
>>>>>>> cpp02
