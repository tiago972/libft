#include "../includes/libft.h"

int		ft_isalpha(int	s)
{
	if (!(s >= 'a' && s <= 'z')
			|| !(s >= 'A' && s <= 'Z'))
		return (0);
	return (1);
}
