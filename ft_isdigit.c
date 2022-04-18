/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft _isdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:56:21 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/03 14:56:36 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
/*
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c1 = '3', c3 = 'M';

    printf("%c bir rakam%s\n", c1, isdigit(c1) ? "dır!" : " değildir!");
    printf("%c bir rakam%s", c3, isdigit(c3) ? "dır!" : " değildir!");

    return 0;
}
*/
// sayı olduğunu gösterir