/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:35:58 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:41:01 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/* 
#include <stdio.h>
int	main(void)
{
	int	f;

	f = open("s1.txt", 1);
	if (f == -1)
		printf("Dosya açılamadı lütfen s1.txt oluşturunuz.");
	else
		printf("Dosya açıldı lütfen s1.txt içersine bakınız.");
	char s[]= "asd";
	ft_putstr_fd(s, f);
}
*/