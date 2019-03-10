#include "../includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;

	i = 0;
	if (!needle)
		return ((char*)haystack);
	while (*(haystack + i))
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
