/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:33:41 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:38:26 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* c değişkeninin yazdırılabilen bir karakter olup
* olmadığını kontrol eder.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
