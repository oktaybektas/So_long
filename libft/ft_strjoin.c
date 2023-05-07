/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:36:44 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:41:43 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * S1+S2 dizilerinin uzunlukları alınır
 * Malloc ile yer ayırılan yeni değişkene
 * 2 string birleştirir.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (s1 && s2)
	{
		str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!str)
			return (NULL);
		i = 0;
		j = 0;
		while (s1[i])
			str[j++] = s1[i++];
		i = 0;
		while (s2[i])
			str[j++] = s2[i++];
		str[j] = 0;
		return (str);
	}
	return (0);
}
/*
int	main(void)
{
	char dizi[] = "Oktay ";
	char dizi2[] = "BEKTAS";
	char *dest = ft_strjoin(dizi, dizi2);
	printf("%s", dest);
} */