#include "../includes/libft.h"

void    ft_putstr(char *str)
{
    char *cpy;

    cpy = str;
    while (*cpy)
    {
        ft_putchar(*cpy);
        cpy++;
    }
}
