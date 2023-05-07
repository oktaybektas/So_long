/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:36:07 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:41:17 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/* int	ft_strlen(const char *str);
#include <stdio.h>
int	main(void)
{
	int f = open("s1.txt", 1);
	if (f == -1)
		printf("Dosya açılamadı lütfen s1.txt oluşturunuz.");
	else
		printf("Dosya açıldı lütfen s1.txt içersine bakınız.");
	char s[]= "Ahmet";
	ft_putstr_fd(s, f);
}*/
