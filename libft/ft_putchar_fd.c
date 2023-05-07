/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:35:52 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 23:52:29 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * -1 se dosya oluşturulmadı
 * fd = 0 okuma, 1 yazma, 2 hata
 * fd:(int) yazdırılacak dosya fd numarası.
 * fd eklemeye 3 den başlar.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
 * O_RDONLY: salt okunur, O_WRONLY: salt yazma, 
 * O_RDWR: okuma ve yazma, O_CREAT: yoksa dosya oluştur
 * O_EXCL: zaten varsa oluşturulmasını engelle
 * 
int	main(void)
{
	int f = open("s1.txt", O_RDWR | O_CREAT | O_EXCL);
	if (f == -1)
		printf("Dosya açılamadı lütfen s1.txt oluşturunuz.");
	else
		printf("Dosya açıldı lütfen s1.txt içersine bakınız.");
	char c= 'k';
	ft_putchar_fd(c, f);
	printf("%d", f);
}*/