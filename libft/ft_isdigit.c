/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:33:34 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:38:22 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * c değişkeninin numerik olup olmadığını
 * kontrol eder.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
