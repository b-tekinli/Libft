/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 14:12:31 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/19 11:15:19 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

/*
void f(void *str) {
	printf("%s", str);
}

// del f'unu kullanarak elemanın hafızadaki yerini temizler. next'in yeri temizlenmiş olmalıdır

int main() {
	t_list *bir = ft_lstnew("bir");
	ft_lstdelone(bir, &f);
}
*/
