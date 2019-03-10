#include "../includes/libft.h"

int		ft_atoi(char *str)
{
	int				sign;
	char			*cpy;
	long long int	res;
	
	sign = 1;
	res = 0;
	cpy = str;
	while (*cpy && (*str == ' ' || *str == '\f' || *str == '\n'
				|| *str == '\r' || *str == '\t' || *str == '\v'))
		cpy++;
	if (*cpy == '+' || *cpy == '-')
	{
		if (*cpy == '-')
			sign = -1;
		cpy++;
	}
	while (*cpy && *cpy >= '0' && *cpy <= '9')
	{
		res = res * 10 + *cpy - '0';
		cpy++;
	}
	return (res * sign);
}
