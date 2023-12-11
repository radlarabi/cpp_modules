SRCS = 	main.cpp \
		Base.cpp 


CPPFLAGS =  -std=c++98 -Wall -Wextra -Werror -fsanitize=address
NAME = Converter
O_SRCS = $(SRCS:%.cpp=%.o)

RM = rm -rf
CPP = c++

all: $(NAME)

$(NAME): $(O_SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(O_SRCS)

fclean: clean
	$(RM) $(NAME)

re : fclean all 

.PHONY: all clean fclean re