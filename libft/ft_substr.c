/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:37:31 by obektas           #+#    #+#             */
/*   Updated: 2023/05/06 15:22:56 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * str'nin start'ıncı indisinden başlar n karakteri
 * yeni bir stringe kopyalar, yeni stringi döndürür.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

/* int	main(void)
{
	char dizi[] = "substr function Implementation";
	char *dest = ft_substr(dizi, 7, 12);
	printf("%s", dest);
} */
