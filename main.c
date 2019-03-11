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

	ft_striter(NULL, NULL);
	ft_striter(str, NULL);
	ft_striter(str, uf_striter_callback);
	if (strcmp(str, "Ifmmp") != 0)
		printf("?\n");
	return (1);
}
