/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:22:46 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/09 18:15:40 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	a;

	a = 0;
	while (c[a])
		a++;
	return (a);
}
// String uzunluğunu verir.
/*
#include <stdio.h>
#include <string.h>
int main(void) {
	const char *comp = "beyza";
	int b;

	b = ft_strlen(comp);

	printf("%s karakter dizisinin uzunluğu: %d\n", comp, b);

	return (0);
}
*/
