/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:37:17 by obektas           #+#    #+#             */
/*   Updated: 2023/05/06 16:56:37 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * haystack'nin ilk n kadar karakterinin içerisinde find'ı
 * arar, bulursa ilk bulduğu yerin adresini döndürür.
 * find NULL'ı gösteriyorsa haystack döndürülür.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[i] != 0 && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != 0 && j + i < len)
			j++;
		if (j == ft_strlen(needle))
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
