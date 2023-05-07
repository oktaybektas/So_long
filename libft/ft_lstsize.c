/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:35:18 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:39:46 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int		main(void)
{
	char *strs[2];
	strs[0] = "selam";
	t_list	*first;
	t_list	*list;
	
	first = ft_lstnew((void *)strs[0]);
	list = ft_lstnew((void *)strs[0]);
	ft_lstadd_front(&list, first);
	printf("%d", ft_lstsize(first));
}
*/