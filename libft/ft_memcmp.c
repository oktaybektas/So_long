/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:35:31 by obektas           #+#    #+#             */
/*   Updated: 2023/05/06 15:11:17 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Indisleri n kadar unsigned char cinsinde karşılaştırır
 * Farklı bir karakter bulursa ascii farkını döndürür.
*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && *(str1 + i) == *(str2 + i))
		i++;
	if (i == n)
		return (0);
	return (*(str1 + i) - *(str2 + i));
}
/*
int		main(void)
{
	printf("ft_strncmp : %d\n", memcmp("oktayyy2", "oktazzz2", 6));
	printf("strncmp : %d\n", memcmp("oktayyy2", "oktaya", 6));
	printf("strncmp : %d\n", memcmp("oktay", "oktay", 5));
}*/
