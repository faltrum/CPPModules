RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
RST = \033[0m

NAME    :=	Polymorphism

SRC     :=	main.cpp		\
			Animal.cpp		\
			Cat.cpp			\
			Dog.cpp			\
			WrongAnimal.cpp	\
			WrongCat.cpp	\
			Brain.cpp

OBJ_DIR := obj

OBJ     := $(SRC:%.cpp=$(OBJ_DIR)/%.o)

CPP     := c++ -std=c++98

CPPFLAGS := -W -Wall -Wextra -Werror -MMD -MP -fsanitize=address

RM      := @rm -rf

all:    $(NAME)

clean:
	$(RM) $(OBJ_DIR) $(DEP_DIR) > /dev/null
	@echo "$(RED)Objects removed$(RST)"

fclean: clean
	$(RM) $(NAME) > /dev/null
	@echo "$(RED)$(NAME) removed$(RST)"

re: fclean all

$(NAME): $(OBJ) Makefile
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Compiled$(RST)"

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $@

.PHONY: all clean fclean re