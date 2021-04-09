NAME	= lst.a

CC		= clang
CFLAGS	= -Wall -Wextra -Werror

SRC		:= $(wildcard *.c)
OBS		:= $(patsubst %.c, %.o, $(SRC))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBS)
	$(CC) $(CFLAGS) -c $(SRC)
	ar -rcs $(NAME) $(OBS)

clean:
	rm $(OBS)

fclean: clean
	rm $(NAME)
