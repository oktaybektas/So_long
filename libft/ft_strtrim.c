/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:37:27 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:42:28 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * s1'in başından ve sonundan set'ın içerisindeki karakterleri
 * silinmiş halini yeni bir string olarak döndürür.
 * 
 * substr (0 dan başla i+1 e kadar kopyala)
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/* 
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	printf("%s\n", ft_strtrim("cbabqbc", "bc"));
} */
