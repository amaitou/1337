SOURCE = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
HEADER = includes/ft.h
OUT    = libft.a
GCC    = gcc
GFLAGS = -Wall -Werror -Wextra
OBJS   = $(SOURCE:.c=.o)
.PHONY: all clean fclean re
all: $(OUT)
$(OUT): $(OBJS)
	ar -r $@ $^
%.o: %.c
	$(GCC) $(CFLAGS) -c $< -I $(HEADER) -o $@
clean:
	rm -f $(OBJS)
fclean:
	rm -f $(OUT) $(OBJS)
re: fclean all
