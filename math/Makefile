NAME = math.a
CC = clang
CFLAGS = -Wall -Werror -Wextra

SRC := $(wildcard *.c)
OBS := $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBS) ft_math.h
	$(CC) $(CFLAGS) -c $(SRC)
	ar -rcs $(NAME) $(OBS)

clean:
	rm -rf *.o

fclean:
	rm -rf *.o *.a
