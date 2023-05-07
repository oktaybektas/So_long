/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:37:02 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:41:56 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Stringin uzunluğunu döndürür
*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*(str++))
		i++;
	return (i);
}
