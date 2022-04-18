/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:21:54 by btekinli          #+#    #+#             */
/*   Updated: 2022/02/10 14:54:59 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	while (n--)
		*(char *)s++ = 0;
}


/*
kullanımdan kaldırıldı memset kullanılıyor
ft_memset(s, '\0', 2);
// bir bayt dizesini sıfırlayın.
*/