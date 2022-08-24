# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: adoner <adoner@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/01 13:16:02 by adoner        #+#    #+#                  #
#    Updated: 2022/08/18 17:01:26 by adoner        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#color
GREEN = \033[38;5;2m
NORMAL = \033[38;5;255m
RED = \033[38;5;1m
BLUE = \033[38;5;4m
YELLOW = \033[1;33m

# Compiler settings
GCC = g++
FLAGS   = -Wall -Wextra -Werror -std=c++98

# Source, tests, header and object files
SRC_FILES = megaphone.cpp

OBJ_DIR = obj
OBJ = $(SRC_FILES:%.c=$(OBJ_DIR)/%.o)


# Program name
NAME = megaphone

# Build release
all: $(OBJ_DIR) $(NAME)

# Build normal
$(OBJ_DIR):
	@mkdir -p $@

$(NAME): $(OBJ)
	$(GCC) $(FLAGS) $^ -o $@
	@echo "$(GREEN) Created megaphone executable.$(NORMAL)"

$(OBJ): $(OBJ_DIR)/%.o : %.c $(HEADER_FILES)
	@mkdir -p $(@D)
	@$(GCC) $(FLAGS) -c $< -o $@

clean:
	@rm -rdf $(OBJ_DIR)
	@echo "$(RED) Deleted all object files.$(NORMAL)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED) Deleted all executables.$(NORMAL)"

re: clean fclean all

.PHONY: clean fclean re
