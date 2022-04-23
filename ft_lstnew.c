/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 12:36:01 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/13 11:18:53 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*first;

	first = malloc(sizeof(*first));
	if (!first)
		return (NULL);
	first->content = content;
	first->next = NULL;
	return (first);
}
// Yeni element oluşturmamızı sağlar
/*
#include <stdio.h>

int main() {
	t_list *newElement;
	newElement = "beyza";
	printf("%s", ft_lstnew(newElement->next));
}
*/
