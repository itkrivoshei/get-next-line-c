NAME = get_next_line

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
SRCS = main.c get_next_line.c
OBJS = $(SRCS:.c=.o)
TEST_FILE = .get_next_line_test.txt

.PHONY: all clean fclean re test

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: $(NAME)
	@set -e; \
	printf "first line\nsecond line\n" > $(TEST_FILE); \
	output=$$(./$(NAME) $(TEST_FILE)); \
	rm -f $(TEST_FILE); \
	echo "$$output" | grep "1: first line" >/dev/null; \
	echo "$$output" | grep "1: second line" >/dev/null; \
	printf "stdin line\n" | ./$(NAME) | grep "1: stdin line" >/dev/null

clean:
	rm -f $(OBJS) $(TEST_FILE)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all
