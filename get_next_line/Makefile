NAME = get_next_line.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard ./get_next_line*.c)
OBJ = $(SRC:.c=.o)
LIBC = ar rcs


all: $(NAME)

$(NAME): $(OBJ)
	${LIBC} $(NAME) $(OBJ)
	ranlib $(NAME)
	chmod 777 *.a

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all