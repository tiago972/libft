#include "../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int		i;
	int		j;

	i = 0;
	if (!needle)
		return ((char*)haystack);
	while (*(haystack + i) && n--)
	{
		j = 0;
		while (*(needle + j) && *(haystack + i + j) == *(needle + j))
			j++;
		if (!*(needle + j))
			return ((char*)haystack + i + j - 1);
		i++;
	}
	return (NULL);
}
