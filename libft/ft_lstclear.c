/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:34:06 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 22:09:23 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = tmp;
		}
	}
}
/* 
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	t_list * l;
	for (int i = 0; i < 3; i++)
	{
		ft_lstadd_front(&l, ft_lstnew(malloc(1)));
		printf("%d", ((int *)l->content)[i]);
		printf("\n");
	}
	ft_lstclear(&l, free);
	printf("%d", ((int *)l->content));
		printf("\n");
}
*/