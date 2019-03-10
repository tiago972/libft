#include <stdio.h>
#include "./includes/libft.h"

int		main(int ac, char **av)
{
	char *cpy;

	cpy = ft_strstr(av[1], av[2]);
	printf("%s", cpy);
	return (0);
}
