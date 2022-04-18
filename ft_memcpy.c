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

int main () {
   const char src[50] = "cprogramlama";
   char dest[50];
   strcpy(dest,"Heloooo!!\n");
   printf("Once memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src)+1);
   printf("Sonra memcpy dest = %s\n", dest);
   
   return(0);
}
*/