#include <stdio.h>
#include "./includes/libft.h"
#include <limits.h>
#include <string.h>
#include <sys/mman.h>
void	*electric_alloc_rev(size_t size)
{
	void	*ptr = mmap(NULL, 8192lu, PROT_READ | PROT_WRITE, MAP_ANON | MAP_PRIVATE, -1, 0);

	memset(ptr, 'Z', 8192lu);
	mprotect(ptr, 4096, PROT_NONE);
	return (ptr + 4096 + size);
}

void	*electric_alloc(size_t size)
{
	void	*ptr = mmap(NULL, 8192lu, PROT_READ | PROT_WRITE, MAP_ANON | MAP_PRIVATE, -1, 0);

	memset(ptr, 'Z', 8192lu);
	mprotect(ptr + 4096, 4096, PROT_NONE);
	return (ptr + 4096 - size);
}

int		main()
{	
	int		i;
	char *string = "      split       this for   me  !       ";
	char **s = ft_strsplit(string, ' ');
	ft_print_words_tables(s);
	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (0);
}
