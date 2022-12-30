NAME			=	Form

SRC				= 	main.cpp\
					Bureaucrat.cpp\
					Form.cpp
					
OBJS			=	$(SRC:%.cpp=%.o)

CPP				=	c++
CPP_FLAGS		= 	-Wall -Wextra -Werror -std=c++98 

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(CPP_FLAGS) $(OBJS) -o $(NAME)
run : all
	./Form				
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re bonus