#include "../includes/libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_elem;
	t_list	*tmp;
	t_list	**begin_list;
	t_list	*res;

	if (!lst || !f)
		return (NULL);
	*begin_list = f(lst);
	res = begin_list;
	tmp = lst->next;
	while (tmp->next)
	{
		new_elem = f(tmp);
		(*begin_list)->next = new_elem;
		(*begin_list) = (*begin_list)->next;
		tmp = tmp->next;
	}
	return (res);
}
