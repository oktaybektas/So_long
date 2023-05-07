/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:36:49 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:41:48 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Size <= dst = size+src
 * Size > dst =(son)dst =(o)src yazar
 * 
*/

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t size)
{
	size_t	i;
	size_t	a;
	size_t	sizedst;
	size_t	sizesrc;

	sizedst = ft_strlen(dst);
	sizesrc = ft_strlen(src);
	a = ft_strlen(dst);
	if (size <= sizedst)
		return (size + sizesrc);
	i = 0;
	while (src[i] != '\0' && a < size - 1)
	{
		dst[a] = src[i];
		a++;
		i++;
	}
	dst[a] = '\0';
	return (sizedst + sizesrc);
}
