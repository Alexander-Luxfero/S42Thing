NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_ALL = $(wildcard ./ft_*.c)
BONUS = $(wildcard ./ft_lst*.c)
SRC = $(filter-out $(BONUS), $(SRC_ALL))
OBJ = $(SRC:.c=.o)
LIBC = ar rcs
BONUS_OBJ = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	${LIBC} $(NAME) $(OBJ)
	chmod 777 *.a

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ) $(BONUS_OBJ)
	${LIBC} $(NAME) $(OBJ) $(BONUS_OBJ)
	chmod 777 *.a

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all