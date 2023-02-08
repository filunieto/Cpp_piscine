
#Is it needed below?
VPATH = src

NAME = phonebook
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

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
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

obj/%.o : %.cpp | obj
	$(CXX) -c $(CPPFLAGS) $< -I $(I) -o $@

# $O%.o : %.cpp | obj
# 	$(CXX) -c $(CPPFLAGS) -I $(I) $< -o $@

obj :
	mkdir obj

clean :
	rm -drf obj

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean

