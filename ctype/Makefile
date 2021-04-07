NAME = ctype.a

CC = clang
CFLAGS = -Wall -Werror -Wextra

SRC := $(wildcard *.c)
OBS := $(SRC:%.c=%.o)

.PHONY: all clean fclean

all: $(NAME)

$(NAME): $(OBS) ft_ctype.h
	$(CC) $(CFLAGS) -c $(SRC)
	ar -rcs $(NAME) $(OBS)

clean:
	rm -rf $(OBS) *.ghc

fclean: clean
	rm -rf $(NAME)
