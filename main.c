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

	char	buf2[] = "ozarabozaraboze123";


	char *s1 = ft_strnstr(buf2, "ozaraboze", 15);
	char *s2 = strnstr(buf2, "ozaraboze", 15);
	printf("eux %s, moi %s\n", s2, s1);
	return (1);
}
