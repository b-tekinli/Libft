/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 14:58:23 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/09 18:15:40 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	f(void *str)
{
	printf("%s\n", str);
}
// f fonksiyonu ile lst içinde gezer ve f'yi tüm elemanlara uygular
int main()
{
	t_list *first = ft_lstnew("beyza");
	t_list *second = ft_lstnew("42");
	first->next = second;
	second->next = NULL;
	ft_lstiter(first, &f);
}*/
