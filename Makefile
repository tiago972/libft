SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c
INCL = ./includes
CC = gcc 
CFLAGS = -Wall -Wextra -Werror -I $(INCL)
OBJ = $(SRCS:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $<
	ranlib $(NAME)

$(OBJ): $(SRCS)
	$(CC) -o $@ -c $< $(CFLAGS) 

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
