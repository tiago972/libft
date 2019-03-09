#include "../includes/libft.h"

int		ft_strlen(char *str)
{
	char	*cpy;

	cpy = str;
	while (*cpy)
		cpy++;
	return (cpy - str);
}
