NAME =  libft.a

SRCS = srcs/ft_putchar.c\
	srcs/ft_putstr.c\
	srcs/ft_swap.c\
	srcs/ft_strlen.c\
	srcs/ft_strcmp.c\

OBJS = $(SRCS:.c=.o)

HEADER = ./includes/

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

.c.o:
	gcc -c $(CFLAGS) -I $(HEADER) $< -o $(<:.c=.o)

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
