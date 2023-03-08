# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 13:52:51 by fnieves           #+#    #+#              #
#    Updated: 2023/03/08 11:16:29 by fnieves-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RESET = \033[0m
GREEN_G = \033[1;32m
GREEN_F = \033[1;0m\033[32m
MAGEN_G = \033[1;36m
MAGEN__F = \033[1;0m\033[36m
RED_G = \033[1;31m
RED_F = \033[1;0m\033[31m


VPATH = src
NAME = harlFilter

SRC = 	main.cpp Harl.cpp

CC = c++
CFLAGS = -Wextra -Wall -Werror -std=c++98

RM = rm -rfd

ODIR = obj
OBJ = $(addprefix $(ODIR)/,$(notdir $(SRC:%.cpp=%.o)))

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o  $@

obj/%.o : %.cpp | obj
	$(CC) $(CFLAGS) -c $<  -o $@

obj :
	mkdir obj

clean :
	$(RM) obj/

fclean : clean
	$(RM) $(NAME)

re : fclean all


.PHONY : all clean fclean re

test1: all
	@echo "$(MAGEN_G)test 1 with DEBUG as input $(MAGEN_F) 🤼$(RESET) "
	./$(NAME) DEBUG

test2: all
	@echo "$(MAGEN_G)test 2 with INFO as input$(MAGEN_F) 🤼$(RESET)"
	./$(NAME) INFO

test3: all
	@echo "$(MAGEN_G)test 3 with WARNING as input$(MAGEN_F) 🤼$(RESET)"
	./$(NAME) WARNING

test4: all
	@echo "$(MAGEN_G)test 4 with ERROR as input$(MAGEN_F) 🤼$(RESET)"
	./$(NAME) ERROR
	
test5 : all
	@echo "$(MAGEN_G)test 5 with no input $(MAGEN_F) 🤼$(RESET)"
	./$(NAME)
	@echo "$(MAGEN_G)...  or more than 1 input$(MAGEN_F) 🤼$(RESET)"
	./$(NAME) WARNING ERROR

test6: all
	@echo "$(MAGEN_G)test 6 with empty string as input$(MAGEN_F) 🤼$(RESET)"
	./$(NAME) ""

alltest : test1 test2 test3 test4 test5 test6