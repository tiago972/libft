#include "../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int		i;
	int		j;

	i = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (n-- && *(haystack + i))
	{
		j = 0;
		while (*(needle + j) && *(haystack + i + j) == *(needle + j))
		{
			j++;
			n--;
		}
		if (*(needle + j) == '\0')
			return ((char*)haystack + i);
		i++;
	}
	return (NULL);
}
