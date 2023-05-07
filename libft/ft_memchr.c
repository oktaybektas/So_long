/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:35:24 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:40:30 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Stringin ilk n kadar karakter içinde c'yi arar.
 * Eğer c'yi bulursa, ilk bulduğu adresi döndürür.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char *c="oktay";
	int v = 'k';
	printf("%s", ft_memchr(c, v, 2));
}*/
