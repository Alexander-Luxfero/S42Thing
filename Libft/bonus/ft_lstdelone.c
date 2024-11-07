#include "libft.h"

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;
/*
1) Взять ноды и адрес к елементу в ноде для ужаления
2) Пройтись по ноде пока не найду что что нужно удалить при помощи free
3) Соеденить цепочку обратно
*/
void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list *previous;
	t_list *after;

	if (lst == NULL)
		return ;
	while (lst != NULL)
	{
		after = lst;
		if(lst->next == del)
		{

		}
	}
}