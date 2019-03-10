CC = gcc 
CFLAGS = -Wall -Wextra -Werror -I $(INCL)
OBJDIR = Objs
SRCDIR = ./srcs
SRC = ft_putchar.c ft_putstr.c ft_putnbr.c \
	   ft_strcat.c ft_strlen.c ft_strdup.c \
	   ft_strcmp.c ft_atoi.c ft_memset.c \
	   ft_bzero.c ft_memcpy.c ft_memccpy.c \
	   ft_memchr.c ft_memcmp.c ft_strcpy.c \
	   ft_strncpy.c ft_strncat.c ft_strchr.c \
	   ft_strrchr.c ft_strstr.c ft_strnstr.c \
	   ft_strncmp.c ft_isalpha.c ft_isdigit.c \
	   ft_isalnum.c ft_isprint.c ft_isascii.c
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
