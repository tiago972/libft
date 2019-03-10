CC = gcc 
CFLAGS = -Wall -Wextra -Werror -I $(INCL)
OBJDIR = Objs
SRCDIR = ./srcs
SRC = ft_putchar.c ft_putstr.c ft_putnbr.c \
	   ft_strcat.c ft_strlen.c ft_strdup.c \
	   ft_strcmp.c
INCL = ./includes
SRCS = $(addprefix $(SRCDIR)/, $(SRC))
OBJ = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(basename $(SRC))))
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $?
	ranlib $(NAME)

$(OBJDIR)/%.o : $(SRCDIR)/%.c
	mkdir -p $(OBJDIR)
	$(CC) -o $@ -c $< $(CFLAGS) 

clean: 
	rm -f $(OBJ)
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
