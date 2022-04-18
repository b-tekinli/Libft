/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:39:55 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/09 16:34:54 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
// küçük harfleri büyük harfe çevirir.
/*
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c1 = 'a', c2 = 'b';

    printf("%c %c\n", c1, toupper(c1));
    printf("%c %c", c2, toupper(c2));

    return 0;
}
*/