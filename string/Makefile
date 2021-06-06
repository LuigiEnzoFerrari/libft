NAME = string.a
CFLAGS = -Wall -Werror -Werror
CC = clang

SRC := $(wildcard *.c)
OBS := $(SRC:%.c=%.o)

.PHONY: all clean

all: $(NAME)

$(NAME): $(OBS)
	$(CC) $(CFLAGS) -c $(SRC)
	ar -rcs $(NAME) $(OBS)

clean:
	$(RM) $(OBS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re