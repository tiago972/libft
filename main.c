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
   
	char *src = electric_alloc(10);

	__builtin___strcpy_chk (src, "123456789", __builtin_object_size (src, 2 > 1 ? 1 : 0));
	ft_strrchr(src, 'a');
	src = electric_alloc_rev(10);
	__builtin___strcpy_chk (src, "123456789", __builtin_object_size (src, 2 > 1 ? 1 : 0));
	ft_strrchr(src, 'a');
	return (0);
}
