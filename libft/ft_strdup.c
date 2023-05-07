/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:36:31 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:41:32 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * malloc ile yer ayırıp 
 * str dizisinin kopyasını oluşturur
*/

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *) malloc (sizeof(char) * (ft_strlen(str) + 1));
	if (!ptr)
		return (NULL);
	while (i < ft_strlen(str))
	{
		*((char *) ptr + i) = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int		main(void)
{
printf("%s\n", ft_strdup("Hello world!"));
return (0);
}*/
