#include "../includes/libft.h"

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	char	*cpydest;
	char	*cpysrc;

	cpysrc = src;
	cpydest = dest;
	while (*cpysrc && n--)
		*cpydest = *cpysrc++;
	while (n--)
		*cpydest = '\0';
	return (dest);
}
