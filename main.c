#include <stdio.h>
#include "./includes/libft.h"
#include <limits.h>
#include <string.h>
#include <sys/mman.h>
int		main()
{		
	char	*str = "Hello les genw";
	char *s1 = "AAAAAAAAAAAAA";
	size_t max = strlen(s1);
	char *i1 = strnstr(str,"" , 3);
	char *i2 = ft_strnstr(str,"", 3);
	if (i1!= i2)
		printf("eux %s, moi %s\n", i1, i2);
	return (0);
}
