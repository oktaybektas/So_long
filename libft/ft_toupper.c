/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:37:40 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:42:43 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * c değişkeni eğer küçükse harfse büyük yapar.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
