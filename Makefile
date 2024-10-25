SRC = ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strlen.c \
			ft_strdup.c \
			ft_strcpy.c \
			ft_strncpy.c \
			ft_strcat.c \
			ft_strncat.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strstr.c \
			ft_strnstr.c \
			ft_strcmp.c \
			ft_strncmp.c \
			ft_atoi.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strlcpy.c \
			ft_calloc.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \

OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all : libft.a
	@true

libft.a :
	gcc -I libft.h $(FLAGS) -c $(SRC)
	ar rcs libft.a $(OBJ)

clean : 
	rm -f libft.a

fclean : clean
	rm -rf $(OBJ)

re : fclean all

dev :
	make fclean;git add .; git commit -m 'auto update';git push;cd ../test;make;make f;cd ../libft;make fclean