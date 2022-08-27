/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:21:52 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/13 17:21:53 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
/*
void to_lower(unsigned int a, char *b)
{
	*b += 5;
}
// ‘f’ fonksiyonu stringin her karakterine uygulanır.
#include<stdio.h>

int main()
{
	char s[] = "ABC";
	ft_striteri(s, to_lower);
	printf("%s", s);
}
*/
