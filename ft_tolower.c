/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:18:13 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/09 16:34:55 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
// büyük harfleri küçük harfe çevirir.
/*
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c1 = 'A', c2 = 'B';

    printf("%c %c\n", c1, tolower(c1));
    printf("%c %c", c2, tolower(c2));

    return 0;
}
*/