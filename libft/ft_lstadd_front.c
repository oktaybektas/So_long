/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:34:01 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 22:07:23 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int z[] = {9};
	int tab[] = {0, 1, 2, 3, 5};
	t_list *l =  ft_lstnew(tab);
	t_list *v =  ft_lstnew(z);

	printf("%d", ((int *)v->content)[0]);
	for (int i = 0; i < 4; i++)
	{
		ft_lstadd_back(&l, ft_lstnew(tab + i));
		printf("%d", ((int *)l->content)[i]);
	}
	ft_lstadd_front(&v, ft_lstnew(z));
}*/