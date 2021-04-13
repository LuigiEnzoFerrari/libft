NAME	= libft.a
CFLAGS	= -Wall -Wextra -Werror
CC		= clang 

DIRS	:= ctype/ math/ conv/ lst/ put/ string/

SRC		:= $(addsuffix *.c, $(DIRS))
#SRC 	:= $(foreach dir, $(DIRS), $(wildcard $(DIRS)*.c))
OBS		:= *.o

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME):
#	$(SRC)
	$(CC) $(CFLAGS) -c $(SRC)
	ar -rcs $(NAME) $(OBS)

clean:
	rm -rf $(OBS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
