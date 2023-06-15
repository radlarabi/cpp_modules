SRCS = megaphone.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone
O_SRCS = $(SRCS:%.cpp=%.o)

RM = rm -rf
CC = c++

all: $(NAME)

$(NAME): $(O_SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(O_SRCS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re