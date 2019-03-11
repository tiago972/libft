#include "../includes/libft.h"

void	ft_striter(char *s, void (*f)(char*))
{
	char	*cpy;

	if (!s)
		return ;
	cpy = s;
	while (*cpy)
		f(cpy++);
}
