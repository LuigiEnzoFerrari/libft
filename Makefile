NAME	= libft.a
CC		= clang
CFLAGS	= -Wall -Wextra -Werror

DIRS	:= ctype \
			math \
			conv \
			lst \
			put \
			string 

SRC		:= $(addsuffix *.c, $(DIRS))
INC		:= include/
OBS		:= $(SRC:%.c=%.o)

all: $(DIRS)

# $(NAME): $(OBS)
# 	ar -rcs $(NAME) $(OBS)

$(DIRS):
	 $(MAKE) -C $@
# make -C ctype/
# make -C math/
# make -C conv/
# make -C lst/
# make -C put/
# make -C string/

clean:
	$(RM) $(OBS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
