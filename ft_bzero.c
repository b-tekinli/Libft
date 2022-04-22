/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:30:51 by btekinli          #+#    #+#             */
/*   Updated: 2022/04/20 16:05:31 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	while (n--)
		*(char *)s++ = 0;
}
// bayt dizesini sıfırlar
/*
#include <stdio.h>

int main() {
	char b[] = "beyza";
	ft_bzero(b, 0);
	printf("%s", b);
	return 0;
}
*/
