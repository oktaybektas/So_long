/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:33:10 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:38:06 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * c değişkeninin alfabetik veya numerik olup 
 * olmadığını kontrol eder.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
