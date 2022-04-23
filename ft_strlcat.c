/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:27:35 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/19 10:54:52 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * srcyi destin üstüne ekleme
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dlen = j;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
		dest[j] = '\0';
	return (dlen + slen);
}
// İki dizeyi birleştiriyor.
/*
#include <stdio.h>
int main()
{
	char src[20] = "beyza";
	char dest[] = "42";

	printf("%zu - %s", ft_strlcat(dest, src, 6), dest);
	return 0;
}*/
