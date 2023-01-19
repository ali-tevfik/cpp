NAME			= Converter

CPP				= c++

# FLAGS			= -Wall -Wextra -Werror -I -std=c++98

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
	 ./Converter -1
	 ./Converter a
	 ./Converter -12.11
	 ./Converter 123f
	 ./Converter 0/0

clean : 
	rm -rf $(OBJ_DIR)
fclean : clean
	rm -rf $(NAME)
re : fclean all
.PHONY : clean, fclean, all, re