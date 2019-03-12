#include "../includes/libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst || !*alst || !del)
		return ;
	del((*t_list)->content, (*t_list)->content_size);
	ft_memdel(alst);
}
