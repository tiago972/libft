#include "../includes/libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_elem;

	if (!(new_elem = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		new_elem->content = NULL;
		new_elem->content_size = 0;
	}
	else
	{
<<<<<<< HEAD
		new_elem->content = ft_memalloc(content_size);
		new_elem->content = ft_memcpy(new_elem->content, content, content_size);
=======
		new_elem->content = (void*)content;
>>>>>>> 694b337f66332fe1a53b0663c44162d670cf91fe
		new_elem->content_size = content_size;
	}
	new_elem->next = NULL;
	return (new_elem);
}
