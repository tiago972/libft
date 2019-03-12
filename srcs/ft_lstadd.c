#include "../includes/libft.h"

void	ft_lstadd(t_list **alst, t_list *new_elem)
{
	if (!alst || !new_elem)
		return ;
	new_elem->next = *alst;
<<<<<<< HEAD
	*alst = new_elem;
=======
	alst = &new_elem;
>>>>>>> 694b337f66332fe1a53b0663c44162d670cf91fe
}
