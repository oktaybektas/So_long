/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:36:57 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:41:52 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Srcyi n kadar dstye kopyalar
 * Sonuç olarak srcnin uzunluğunu döndürür
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int main()
{
    char *src="oktay";
    char dest[20];
    size_t i = 2;
    printf("%zu",ft_strlcpy(dest,src,i));
    printf("%s", dest);
}*/
