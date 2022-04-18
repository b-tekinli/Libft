/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:24:11 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/14 10:58:41 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*r;
	int		tmp;
	int		a;

	a = 1;
	tmp = n;
	while (tmp && a++)
		tmp = tmp / 10;
	r = (char *)malloc(sizeof(char) * ((n < 0) + a + (n == 0)));
	if (!r)
		return (r);
	r = r + (n < 0) + a - 1 + (n == 0);
	*r = '\0';
	if (n == 0)
		*(--r) = '0';
	a = (n >= 0) * 2 - 1;
	while (n)
	{
		*(--r) = (n % (10 * a)) * a + '0';
		n = n / 10;
	}
	if (a < 0)
		*(--r) = '-';
	return (r);
}


/*
c dilinde bir integer'ı ascii'ye çeviren fonksiyon. 
stdlib.h'ta vardır visual c'de.
*/
/*
#include <stdio.h>
int main() {
	char arr[100];
	printf("Taban: 16, Değer: %s", itoa(1567, arr, 16));
}
*/