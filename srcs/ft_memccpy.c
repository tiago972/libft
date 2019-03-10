#include "../includes/libft.h"

void	*memccpy(void *dest, const void *src, int c, size_t len)
{
	void	*cpy;

	cpy = ft_memchr(src, c, len);
	if (cpy)
		return (ft_memcpy(dest, src, cpy - src + 1));
	ft_memcpy(dest, src, len);
	return (NULL);
}
