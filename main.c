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
	char	*str;
	int ret = 0;
	str = strdup("abc"); /* FIX un faux OK si l'user a mis "if s1 == s2 return 1;" */
	if ((ret = ft_strequ("", "")) != 1)
	{
		printf("Error Line %d, Funct %s : \n\033[31mft_strequ(\"\", \"\").\nExpected ret = \"1\" \
				but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, ret);
	}
	free(str);
	return (1);
}
