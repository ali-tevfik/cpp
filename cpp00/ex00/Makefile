#color
GREEN = \033[38;5;2m
RED = \033[38;5;1m

# Compiler settings
GCC = g++
FLAGS   = -Wall -Wextra -Werror -std=c++98

# Source, tests, header and object files
SRC_FILES = megaphone.cpp

OBJ = $(SRC_FILES:%.c=$(OBJ_DIR)/%.o)


# Program name
NAME = megaphone

# Build release
all: $(NAME)


$(NAME): $(OBJ)
	$(GCC) $(FLAGS) $^ -o $@
	@echo "$(GREEN) Created megaphone executable.$(NORMAL)"

clean:
	@rm -rdf $(OBJ_DIR)
	@echo "$(RED) Deleted all object files.$(NORMAL)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED) Deleted all executables.$(NORMAL)"

re: clean fclean all

.PHONY: clean fclean re
