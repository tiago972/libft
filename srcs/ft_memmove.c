#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*cpydest;
	const char	*cpysrc;

	cpydest = (char*)dst;
	cpysrc = (const char*)src;
	if (dst < src)
		while (n--)
			*cpydest++ = *cpysrc++;
	else
	{
		cpydest = (char*)dst + n - 1;
		cpysrc = (const char*)src + n - 1;
		while (n--)
			*cpydest++ = *cpysrc++;
	}
	return (dst);
}
