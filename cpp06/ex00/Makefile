NAME			= converter

CPP				= c++

FLAGS			= -Wall -Wextra -Werror -I -std=c++98

SRC				= 	main.cpp\
					Converter.cpp

INC				= 	Converter.hpp

OBJ_DIR			= obj
OBJ				= $(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))

all : $(NAME)

$(OBJ_DIR)/%.o : %.cpp $(INC)
	@mkdir -p $(dir $@)
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $^ -o $@

run: all
	 ./converter -1
	 ./converter a
	 ./converter -12.11
	 ./converter 123f
	 ./converter 0/0

clean : 
	rm -rf $(OBJ_DIR)
fclean : clean
	rm -rf $(NAME)
re : fclean all
.PHONY : clean, fclean, all, re