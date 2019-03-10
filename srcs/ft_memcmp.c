#include "../includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*cpys1;
	const char	*cpys2;

	cpys1 = (const char*)s1;
	cpys2 = (const char*)s2;
	while (n--)
	{
		if (*cpys1 != *cpys2)
			return (*cpys1 - *cpys2);
		cpys1++;
		cpys2++;
	}
	return (0);
}
