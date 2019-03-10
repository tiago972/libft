#include "../includes/libft.h"

void	ft_putstr(char *str)
{
	char *cpy;

	if (!str)
		return ;
	cpy = str;
	while (*cpy)
	{
		ft_putchar(*cpy);
		cpy++;
	}
}
