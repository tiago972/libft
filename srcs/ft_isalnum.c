#include "../includes/libft.h"

int		ft_isalnum(int s)
{
	if (!ft_isalpha(s) || !ft_isdigit(s))
		return (0);
	return (1);
}
