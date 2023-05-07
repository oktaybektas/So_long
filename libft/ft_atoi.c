/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 01:10:30 by obektas           #+#    #+#             */
/*   Updated: 2022/10/23 00:05:30 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * String ifadeyi integera çevirir
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	short int		sign;
	unsigned long	result;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\f'
		|| *str == '\v' || *str == '\r')
		++str;
	if (*str == '-' && ++str)
		sign = -1;
	else if (*str == '+')
		++str;
	while ('0' <= *str && *str <= '9')
		result = result * 10 + ((unsigned long)*str++ - 48);
	return ((int)result * sign);
}
/*
#include<stdio.h>
int main()
{
    printf("  -528: %d\n", ft_atoi(" -528"));
    return 0;
}*/
