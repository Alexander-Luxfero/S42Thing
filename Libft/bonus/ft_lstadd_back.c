#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *ex;
	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ex = *lst;
	while(ex->next != NULL)
		ex = ex->next;
	ex->next = new;
}