SRCS = megaphone.cpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone
O_SRCS = $(SRCS:%.cpp=%.o)

RM = rm -rf
CCP = c++

all: $(NAME)

$(NAME): $(O_SRCS)
	$(CCP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(O_SRCS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re