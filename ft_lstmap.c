/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 15:01:42 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/13 11:17:15 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (lst == NULL || f == NULL)
		return (NULL);
	first = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
// ’lst’ üzerinde gezer ve ‘f’ fonksiyonunu her eleamana uygular 
// f uygulanan her elemandan yeni liste oluşturur
// gerekli durumlarda del kullanılarak content temizlenir
/*
void f(void *str) {
    printf("%s", str);
}

int main() {
    t_list *bir = ft_lstnew("beyza");
    t_list *iki = ft_lstnew("42");
    bir->next = iki;
    iki->next = "NULL";
    ft_lstmap(&bir, f, &f);
}
*/
