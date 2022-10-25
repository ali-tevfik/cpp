NAME			=	Phonebook

SRC				= 	Phonebook.cpp\
					Contact.cpp\
					main.cpp

INC				=	-I ./inc

OBJS			=	$(SRC:%.cpp=%.o)

CPP				=	c++
CPP_FLAGS		= 	-Wall -Wextra -Werror -std=c++98 

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(CPP_FLAGS) $(INC) $(OBJS) -o $(NAME)
				
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re bonus