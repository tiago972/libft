#include "../includes/libft.h"

int		ft_isprint(int	s)
{
	if (s < 31 || s == 127)
		return (0);
	return (1);
}
