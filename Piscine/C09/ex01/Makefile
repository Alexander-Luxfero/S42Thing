NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_putchar.c ft_swap.c ft_putstr.c  ft_strlen.c ft_strcmp.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	chmod 777 *.a

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all