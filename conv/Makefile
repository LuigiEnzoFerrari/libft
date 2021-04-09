NAME = conv.a
CC = clang
CFLAGS = -Wall -Werror -Wextra

SRC := $(wildcard *.c)
OBS := $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBS) ft_conv.h
	$(CC) $(CFLAGS) -c $(SRC)
	ar -rcs $(NAME) $(OBS)

clean:
	rm -rf *.o *.gch

fclean: clean
	rm -rf $(NAME)