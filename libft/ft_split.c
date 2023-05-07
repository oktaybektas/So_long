/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:36:13 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:41:22 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * S dizisi içinde c ye eşit olmadığında
 * main *a[] stringine ekler
 * ft_split("marhaba.selamlar.mmm", '.')
*/

#include "libft.h"
#include <stdio.h>

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static void	ft_allocate(char **new, char const *s, char c)
{
	char		**new_p;
	char const	*tmp;

	tmp = s;
	new_p = new;
	while (*tmp)
	{
		while (*s == c)
			++s;
		tmp = s;
		while (*tmp && *tmp != c)
			++tmp;
		if (tmp > s)
		{
			*new_p = ft_substr(s, 0, tmp - s);
			s = tmp;
			++new_p;
		}
	}
	*new_p = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	new = (char **)malloc(sizeof(char *) * (size + 1));
	if (!new)
		return (NULL);
	ft_allocate(new, s, c);
	return (new);
}
/*
int	main(void)
{
	char	**a;
	char	*dizi;

	dizi = "Oktay.BEKTAS";
	a = ft_split(dizi, '.');
	printf("%s\n", a[0]);
	printf("%s", a[1]);
}*/