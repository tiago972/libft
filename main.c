#include <stdio.h>
#include "./includes/libft.h"
#include <limits.h>
#include <string.h>
#include <sys/mman.h>
int		main(int ac, char **av)
{	
	if (ac < 2)
		return (0);
	printf("%s",ft_itoa(atoi(av[1])));
	return (0);
}
