/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:33:50 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:37:54 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Dizinin ilk n karakterine kadar NULL atar.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
int main(void)
{
    char b[] = "bzero";
    size_t i;
    int a = strlen(b);
    i = 0;
    ft_bzero(b, 2);
    while (i <= a)
    {
        printf("%c\n", b[i]);
        i++;
    }
    return (0);
}*/