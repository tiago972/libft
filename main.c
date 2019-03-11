#include <stdio.h>
#include "./includes/libft.h"
#include <limits.h>
#include <string.h>
#include <sys/mman.h>
void			uf_striter_callback(char *s)
{
	*s = *s + 1;
}

int		main()
{		

char		str[] = "Hello";

	printf("%d\n", ft_strequ("", ""));	
	return (1);
}
