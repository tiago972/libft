#include <stdio.h>
#include "./includes/libft.h"

int		main(int ac, char **av)
{
	char *cpy;

	cpy = ft_strdup(av[1]);
	ft_putstr(cpy);
	free(cpy);
	return (0);
}
