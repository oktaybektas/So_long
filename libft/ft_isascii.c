/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:33:27 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:38:17 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * c değişkeninin ascii olup olmadığını
 * kontrol eder.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
