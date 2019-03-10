#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*cpy;
	unsigned char	d;

	d = (unsigned char)c;
	cpy = (const char*)s;
	while (n--)
	{
		if (*cpy == d)
			return ((void*)cpy);
		cpy++;
	}
	return (NULL);
}
