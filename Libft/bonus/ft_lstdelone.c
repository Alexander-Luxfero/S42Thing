/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:40:01 by akuzmin           #+#    #+#             */
/*   Updated: 2024/11/08 09:14:21 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
1) Взять ноды и адрес к елементу в ноде для ужаления
2) Пройтись по ноде пока не найду что что нужно удалить при помощи free
3) Соеденить цепочку обратно
*/
// void ft_lstdelone(t_list *lst, void (*del)(void *))
// {
// 	t_list *previous;
// 	t_list *after;

// 	if (lst == NULL)
// 		return ;
// 	while (lst != NULL)
// 	{
// 		previous = lst;
// 		if(lst->next == del)
// 		{
// 			lst = lst->next;
// 			after = lst->next;
// 			free(lst);
// 			previous->next = after;
// 			lst = previous;
// 		}
// 		lst = lst->next;
// 	}
// }
//*del это функция которая делает все это сама, зря парился
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
