NAME	= libft.a
CC		= clang
CFLAGS	= -Wall -Wextra -Werror

DIRS	:= ctype/ math/ conv/ lst/ put/ string/

SRC		:= $(addsuffix *.c, $(DIRS))
INC		:= include/
OBS		:= *.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -I $(INC) -c $(SRC)
	ar -rcs $(NAME) $(OBS)

clean:
	rm -rf $(OBS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re 