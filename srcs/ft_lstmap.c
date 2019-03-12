#include "../includes/libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_elem;
	t_list	*tmp;
<<<<<<< HEAD
=======
	t_list	**begin_list;
>>>>>>> 694b337f66332fe1a53b0663c44162d670cf91fe
	t_list	*res;

	if (!lst || !f)
		return (NULL);
	new_elem = f(lst);
<<<<<<< HEAD
	res = new_elem;
	tmp = lst->next;
	while (tmp)
	{
		new_elem->next = f(tmp);
		tmp = tmp->next;
		new_elem = new_elem->next;
=======
	begin_list = &new_elem;
	res = *begin_list;
	tmp = lst->next;
	while (tmp->next)
	{
		new_elem = f(tmp);
		(*begin_list)->next = new_elem;
		(*begin_list) = (*begin_list)->next;
		tmp = tmp->next;
>>>>>>> 694b337f66332fe1a53b0663c44162d670cf91fe
	}
	return (res);
}
