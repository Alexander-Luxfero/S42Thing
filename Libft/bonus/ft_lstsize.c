#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int nodec;
	
	nodec = 0;
	while(lst != NULL)
	{
		nodec++;
		lst = lst->next;
	}
	return (nodec);
}