NAME = weapon

COMPI = c++ -std=c++98
ERRORS = -Wall -Wextra -Werror -fsanitize=address

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(COMPI) $(ERRORS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all