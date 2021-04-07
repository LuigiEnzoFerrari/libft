NAME = string.a
CFLAGS = -Wall -Werror -Werror
CC = clang

SRC := $(wildcard *.c)
OBS := $(SRC:%.c=%.o)

.PHONY: all clean

all: $(NAME)

$(NAME): $(OBS) ft_string.h
	$(CC) $(CFLAGS) -c $(SRC)
	ar -rcs $(NAME) $(OBS)

clean:
	rm -rf $(OBS) *.ghc

fclean: clean
	rm -rf $(NAME)
