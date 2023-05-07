/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:37:06 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:42:04 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * S dizisine f fonksiyonu işlem yapılır
 * Sonunda char değişkeninde tutar
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *) malloc (ft_strlen(s) + 1 * sizeof(char));
	if (!str)
		return (NULL);
	while (i < ft_strlen(s))
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/* char ft_double(unsigned int, char);
#include <stdio.h>
int	main(void)
{
	char a[] = "kkkkk";
	char *b;
	b = ft_strmapi(a, ft_double);
	printf("%s", b);
}
char ft_double(unsigned int i, char c)
{
	if (i % 2)
		return(c + 1);
	else
		return(c - 1);
}*/
