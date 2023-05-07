/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:33:18 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:38:12 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * c değişkeninin alfabetik olup olmadığını 
 * kontrol eder.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
