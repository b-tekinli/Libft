/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:24:59 by btekinli          #+#    #+#             */
/*   Updated: 2022/02/10 15:08:25 by btekinli         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (n--)
	{
		*((char *)dst + i) = *((const char *)src + i);
		i++;
	}
	return (dst);
}
// Veri tasarruflu kopyalama yapar.
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    const char *cp = "Bilgisayar&Programlama";
    char dest[40];

    ft_memset(dest, '1', 40);
    ft_memcpy(dest, cp, 40);
    printf("%s\n", dest);

    ft_memset(dest, '1', 40);
    ft_memcpy(dest, cp, 40);
    printf("%s", dest);

    return 0;
}
*/