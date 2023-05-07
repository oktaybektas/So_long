/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:37:11 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:42:12 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * indisleri n karakter kadar unsigned char cinsinden karşılaştırır,
 * eğer farklı bir karakter bulursa ascii farkını döndürür.
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while ((unsigned char)*s1 == (unsigned char)*s2 && *s1 != 0 && n-- > 1)
	{
		s1++;
		s2++;
	}
	if ((unsigned char)*s1 == (unsigned char)*s2)
		return (0);
	else
		return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
int		main(void)
{
	printf("ft_strncmp : %d\n", ft_strncmp("oktayyy2", "oktazzz2", 6));
	printf("strncmp : %d\n", strncmp("oktayyy2", "oktayv", 6));
	printf("strncmp : %d\n", strncmp("oktay", "oktay", 5));
}*/
