/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:37:21 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:42:24 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Stringin içinde find'i tersten arar,
 * Bulduğu ilk yerin adresini döndürür.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int find)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (*((char *)(str + i)) == (char)(find))
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}
/*
int main()
{
	char *c="oktaykat";
	int v = 'k';
	printf("%s", ft_strrchr(c, v));
}*/
