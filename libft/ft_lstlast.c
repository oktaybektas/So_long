/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:34:24 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 20:52:57 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (0);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
/* 
#include <stdio.h>
int		main(void)
{
	char *strs[2];
	strs[0] = "s1";
	strs[1] = "s2";
	t_list	*first;
	t_list	*list;
	
	first = ft_lstnew((void *)strs[0]);//diğer gönderim first = ft_lstnew(strs[0]);
	list = ft_lstnew((void *)strs[1]);
	ft_lstadd_front(&list, first);
	printf("%s", ft_lstlast(list)->content);
}
*/