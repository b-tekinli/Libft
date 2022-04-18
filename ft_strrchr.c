/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:10:22 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/09 18:15:40 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	if (!ft_strchr(src, (char)c))
		return (0);
	while (*src)
		src++;
	while (*src != (char)c)
		src--;
	return ((char *)src);
}
// dizedeki karakteri bulun.
/*
#include <stdio.h>
#include <string.h>

int main( void )
{
    const char dizi[] = "Bilgisayar";
    char cd = 'i';
    char *ret;

    ret = strrchr(dizi, cd);

    printf("Bulunan son %c karakterinden itibaren dizi içeriği: %s", cd, ret);

    return 0;
}
*/