
#Is it needed below?
VPATH = src

NAME = phonebook

SRC = main.cpp Contact.cpp PhoneBook.cpp Prompt.cpp

ODIR = obj/

OBJ = $(addprefix obj/,$(notdir $(SRC:%.cpp=%.o)))

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

obj/%.o : %.cpp | obj
	$(CXX) -c $(CPPFLAGS) $< -o $@

obj :
	mkdir obj

clean :
	rm -drf obj

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean

