NAME = Zombie

ERRORS = -Wall -Wextra -Werror
FLAGS = -fsanitize=address
COMPI = g++ -std=c++98

SRC = main.cpp Zombie.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(COMPI) $(ERRORS) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all