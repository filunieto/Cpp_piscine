# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 20:33:33 by fnieves-          #+#    #+#              #
#    Updated: 2023/02/19 14:58:40 by fnieves          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# do not gorget!!
VPATH = src

NAME = test
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RESET = \033[0m
GREEN_G = \033[1;32m
GREEN_F = \033[1;0m\033[32m
MAGEN_G = \033[1;36m
MAGEN__F = \033[1;0m\033[36m
RED_G = \033[1;31m
RED_F = \033[1;0m\033[31m



SRC = 	Account.cpp \
		tests.cpp

OBJ = $(addprefix obj/,$(notdir $(SRC:%.cpp=%.o)))


all : $(NAME)

$(NAME) : $(OBJ)
	@echo "$(MAGEN_G)$(NAME)$(MAGEN_F) 🤼$(RESET) linking..."
	@$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "file $(MAGEN_G)$(NAME)$(MAGEN_F)$(RESET) created❗ 🏆🏆🏆"

obj/%.o : %.cpp | obj
	@echo "$(GREEN_G)$(NAME)$(GREEN_F)$(RESET) compiling 🧘🧘🧘"
	@$(CXX) -c $(CPPFLAGS) $<  -o $@


obj :
	@mkdir obj

run : re
	./phonebook
clean :
	@rm -drf obj
	@echo "Objects files $(RED_G) $(OBJ) $(RED_F) $(RESET)removed!"

fclean : clean
	@rm -f $(NAME)
	@echo "$(RED_G)$(NAME)$(RED_F) $(RESET) also removed!"

re : fclean all

.PHONY : all clean fclean

