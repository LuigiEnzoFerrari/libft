NAME	= libft.a
CFLAGS	= -Wall -Wextra -Werror
CC		= clang 

DIRS	:= ctype/ string/ math/ conv/ lst/ put/

SRC 	:= $(foreach dir, $(DIRS), $(addsuffix *.c, $(DIRS)))
OBS		:= *.o

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
	ar -rcs $(NAME) $(OBS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf *.a

re: fclean all
