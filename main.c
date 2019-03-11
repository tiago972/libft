#include <stdio.h>
#include "./includes/libft.h"
#include <limits.h>
#include <string.h>
#include <sys/mman.h>
int		main()
{	


char		*str = "Hello les genw";

	if (strnstr(str, "Hello", 3) != ft_strnstr(str, "Hello", 3))
		printf("eux %s, moi %s\n", strnstr(str, "Hello", 3) ,  ft_strnstr(str, "Hello", 3));
	return (0);
}
