/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:36:23 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:41:28 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * stringin içinde c'i arar,
 * ilk bulduğu yerin adresini döndürür.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
