
#Is it needed below?
VPATH = src

NAME = phonebook
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RESET = \033[0m
GREEN_G = \033[1;32m
GREEN_F = \033[1;0m\033[32m
MAGEN_G = \033[1;36m
MAGEN__F = \033[1;0m\033[36m
RED_G = \033[1;31m
RED_F = \033[1;0m\033[31m


# S = src/ 
# O = obj/
I = include/

# SRC = 	$Smain.cpp		\
# 		$SContact.cpp		\
# 		$SPhoneBook.cpp	\
# 		$SPrompt.cpp		\

# OBJ = $(patsubst $S%.cpp, $O%.o, $(SRC))

SRC = 	main.cpp Contact.cpp PhoneBook.cpp \
		# Prompt.cpp 
		# añadir Prompt este archivo en el makefile después

OBJ = $(addprefix obj/,$(notdir $(SRC:%.cpp=%.o)))


all : $(NAME)

$(NAME) : $(OBJ)
	@echo "$(MAGEN_G)$(NAME)$(MAGEN_F) 🤼 linking...$(RESET)"
	@$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "$(MAGEN_G)$(NAME)$(MAGEN_F) created.🤸‍♂$(RESET)"

obj/%.o : %.cpp | obj
	@echo "$(GREEN_G)$(NAME)$(GREEN_F) compiling 🧘🧘🧘$(RESET)"
	@$(CXX) -c $(CPPFLAGS) $<  -o $@

# @$(CXX) -c $(CPPFLAGS) $< -I $(I) -o $@

# $O%.o : %.cpp | obj
# 	$(CXX) -c $(CPPFLAGS) -I $(I) $< -o $@

obj :
	@mkdir obj

run : all
	./phonebook
clean :
	@rm -drf obj
	@echo "$(RED_G)Objects files $(OBJ) $(RED_F) removed!$(RESET)"

fclean : clean
	@rm -f $(NAME)
	@echo "$(RED_G)$(NAME)$(RED_F) also removed!$(RESET)"

re : fclean all

.PHONY : all clean fclean

