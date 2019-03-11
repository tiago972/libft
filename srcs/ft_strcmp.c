#include "../includes/libft.h"

int		ft_strcmp(char *s1, char *s2)
{
	char			*cpys1;
	char			*cpys2;
	unsigned char	c1;
	unsigned char	c2;

	cpys1 = s1;
	cpys2 = s2;
	c1 = *cpys1;
	c2 = *cpys2;
	while (*cpys1 || *cpys2)
	{
		c1 = *cpys1;
		c2 = *cpys2;
		if (c1 != c2)
			return (c1 - c2);
		cpys1++;
		cpys2++;
	}
	return (c1 - c2);
}
