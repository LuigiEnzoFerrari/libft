# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/07 19:47:41 by lenzo-pe          #+#    #+#              #
#    Updated: 2021/04/06 20:34:52 by lenzo-pe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = clang 
SRC = ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
		ft_memcpy.c ft_memmove.c ft_memset.c ft_memdel.c\
		\
		ft_strnlen.c ft_strclen.c ft_strslen.c \
		ft_strlen.c \
		\
		ft_strcmp.c ft_strcpy.c ft_strcat.c \
		ft_strncmp.c ft_strncpy.c ft_strlcpy.c \
		ft_strncat.c ft_strlcat.c ft_strclr.c \
		\
		ft_isxdigit.c ft_isdigit.c ft_isalpha.c \
		ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_isspace.c ft_toupper.c ft_tolower.c \
		ft_isupper.c ft_islower.c \
		\
		ft_strchr.c ft_strrchr.c \
		ft_strstr.c ft_strnstr.c \
		\
		ft_atoi.c ft_xtoa.c ft_iwtoa.c ft_ftoa.c \
		ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strndup.c ft_strjoin.c \
		ft_joindel.c ft_joindeld.c \
		ft_strtrim.c ft_itoa.c \
		ft_nbrlen.c ft_revitoa.c ft_strrev.c ft_swapchr.c \
		ft_xnbrlen.c \
		\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c \
		\
		ft_putchar.c ft_putstr.c ft_putnstr.c ft_putcstr.c \
		ft_putsstr.c \
		\
		ft_split.c ft_strltok.c ft_strmapi.c \
		ft_strldiff.c ft_strdel.c \
		\
		ft_digitlen.c ft_chrlen.c ft_dseqlen.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstiter.c ft_lstclear.c \
ft_lstmap.c

OBS = $(SRC:.c=.o)

OBS_BS = $(BONUS:.c=.o)

$(NAME): $(OBS) libft.h 
	$(CC) $(CFLAGS) -c $(SRC)
	ar -rcs $(NAME) $(OBS)
	
.PHONY: all clean fclean re bonus

all: $(NAME)

bonus: $(OBS_BS) $(NAME)
	$(CC) $(CFLAGS) -c $(BONUS)
	ar -rcs $(NAME) $(OBS_BS)

clean:
	rm -rf $(OBS) $(OBS_BS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
