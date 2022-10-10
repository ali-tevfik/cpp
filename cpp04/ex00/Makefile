NAME			=	Polymorphism

SRC				= 	main.cpp\
					Animal.cpp\
					Cat.cpp\
					Dog.cpp
					
OBJS			=	$(SRC:%.cpp=%.o)

CPP				=	g++
CPP_FLAGS		= 	-Wall -Wextra -Werror -std=c++98 

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(CPP_FLAGS) $(OBJS) -o $(NAME)
				
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re bonus