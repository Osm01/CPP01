NAME = ref

ERRORS = -Wall -Wextra -Werror
COMPI = g++ -std=c++98

SRC = main.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(COMPI) $(ERRORS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all