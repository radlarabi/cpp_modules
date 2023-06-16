SRCS = 	main.cpp \
		newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp \

CFLAGS =  -std=c++98
NAME = Zombie
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

re : fclean all 

.PHONY: all clean fclean re