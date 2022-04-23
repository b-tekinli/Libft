/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 12:52:52 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/09 18:15:40 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}
// listenin son elemanını verir
/*
#include <stdio.h>

int main() {
	t_list *bir = ft_lstnew("bir");
	t_list *iki = ft_lstnew("iki");
	bir->next = iki;
	iki->next = NULL;
	t_list *son = ft_lstlast(bir);
    printf("%s", son->content);
}
*/
