SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_putnbr.c \
	   ./srcs/ft_strcat.c ./srcs/ft_strlen.c ./srcs/ft_strdup.c
INCL = ./includes
CC = gcc 
CFLAGS = -Wall -Wextra -Werror -I $(INCL)
OBJ = $(SRCS:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $<
	ranlib $(NAME)

%.o : %.c
	$(CC) -o $@ -c $< $(CFLAGS) 

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
