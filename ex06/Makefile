NAME = harlFilter

COMPI = g++ -std=c++98
ERRORS = -Wall -Wextra -Werror -fsanitize=address

SRC = main.cpp Harl.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(COMPI) $(ERRORS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)
fclean : clean

re : fclean all

