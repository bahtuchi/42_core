SRC = ft_isprint.c ft_memchr.c ft_memcpy.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_atoi.c ft_bzero.c ft_memset.c ft_strlen.c ft_tolower.c ft_toupper.c

HEADER = libft.h

NAME = libft.a
CCFLAGS = -Wall -Wextra -Werror
AR = ar

OBJ = $(SRC:.c=.o)

%.o: %.c
	cc -I $(HEADER) $(CCFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(AR) rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f *.o

fclean:
	$(MAKE) clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY:
	all clean fclean re