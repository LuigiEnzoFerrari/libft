NAME = put.a

CC = clang
CFLAGS = -Wall -Werror -Wextra

SRC = $(wildcard *.c)
OBS = $(SRC:%.c=%.o)

.PHONY: all clean fclean

all: $(NAME)

$(NAME): $(OBS)
	$(CC) $(CFLAGS) -c $(SRC)
	ar -rcs $(NAME) $(OBS)

clean:
	$(RM) $(OBS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean all