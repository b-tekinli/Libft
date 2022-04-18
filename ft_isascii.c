/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:16:53 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/04 11:18:44 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c1 = 'h', c2 = '&';

    printf("%c ascii karakteri %s\n", c1, isalpha(c1) ? "dir!" : "değildir!");
    printf("%c ascii karakteri %s\n", c2, isalpha(c2) ? "dir!" : "değildir!");

    return 0;
}
*/
// ascii karakteri mi değil mi