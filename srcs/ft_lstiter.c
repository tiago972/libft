#include "../includes/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	tmp = lst;
<<<<<<< HEAD
	while (tmp)
=======
	while (tmp->next)
>>>>>>> 694b337f66332fe1a53b0663c44162d670cf91fe
	{
		f(tmp);
		tmp = tmp->next;
	}
}
