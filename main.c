#include <stdio.h>
#include "./includes/libft.h"
#include <limits.h>
#include <string.h>
#include <sys/mman.h>
int		main(int ac, char **av)
{	

	char src[] = "test basic du memccpy !";
	char buff1[22];

	char *r1 = memccpy(buff1, src, 'm', 22);
	char *r2 = ft_memccpy(buff1, src, 'm', 22);
	printf("s1 %s, s2 %s\n", r1, r2);
	return (0);
}
