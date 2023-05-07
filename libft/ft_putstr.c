/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:10:35 by obektas           #+#    #+#             */
/*   Updated: 2023/05/06 15:12:46 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_putstr(char *c)
{
	int	len;

	len = 0;
	if (c)
		while (c[len])
			len += ft_putchar(c[len]);
	else
		len += ft_putstr("(null)");
	return (len);
}
