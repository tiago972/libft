#include "../includes/libft.h"

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	char	*cpys1;
	char	*cpys2;

	cpys1 = s1;
	cpys2 = s2;
	while (n-- && (*cpys1 || *cpys2))
	{
		if (*cpys1 != *cpys2)
			return (*cpys1 - *cpys2);
		cpys1++;
		cpys2++;
	}
	return (0);
}
