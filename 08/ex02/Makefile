SRCS = 	main.cpp \

CXXFLAGS =   -Wall -Wextra -Werror
NAME = Span
O_SRCS = $(SRCS:%.cpp=%.o)

RM = rm -rf
CXX = c++

all: $(NAME)

$(NAME): $(O_SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(O_SRCS)

fclean: clean
	$(RM) $(NAME)

re : fclean all 

.PHONY: all clean fclean re