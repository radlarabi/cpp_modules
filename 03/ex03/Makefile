SRCS = 	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp \


CPPFLAGS =  -std=c++98 -Wall -Wextra -Werror
NAME = DiamondTrap
O_SRCS = $(SRCS:%.cpp=%.o)

RM = rm -rf
CC = c++

all: $(NAME)

$(NAME): $(O_SRCS)
	$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(O_SRCS)

fclean: clean
	$(RM) $(NAME)

re : fclean all 

.PHONY: all clean fclean re