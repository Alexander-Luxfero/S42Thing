NAME = rush-02
SRCS = main.c read_dict.c parser.c utils.c morningstar.c print_lookup.c func_hundreds.c utils2.c
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra
INCLUDES = ./

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Linking and producing the final application"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS): $(SRCS)
	@echo "Compiling the file"
	$(CC) $(CFLAGS) -c $(SRCS) -I $(INCLUDES)

clean: 
	@echo "Removing everything but the source files"
	rm -f $(OBJS)
fclean: clean
	@echo "Removing the final application"
	rm -f $(NAME)

re: fclean all
