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

int		main(int ac, char **av)
{
	
	char src[] = "test basic du memccpy !";
	char buff1[22];

	__builtin___memset_chk (buff1, 0, sizeof(buff1), __builtin_object_size (buff1, 0));
	char *r1 = memccpy(buff1, src, 'm', 22);
	char *r2 = ft_memccpy(buff1, src, 'm', 22);
	printf("S1 %s, S2 %s", r1, r2);
	return (0);
}
