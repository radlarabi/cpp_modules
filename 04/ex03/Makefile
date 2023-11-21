SRCS = 	main.cpp \
		AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp \


CPPFLAGS =  -std=c++98 -Wall -Wextra -Werror
NAME = Brain
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