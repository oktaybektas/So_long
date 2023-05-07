/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:34:18 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 22:11:18 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void addOne(void * p) {++*(int*)p;}
int main ()
{
int tab[] = {0, 1, 2, 3};
	t_list * l =  ft_lstnew(tab);
	for (int i = 1; i < 4; ++i)
		{ft_lstadd_back(&l, ft_lstnew(tab + i));
		printf("%d", ((int *)l->content)[i]);}
	ft_lstiter(l, addOne);
	printf("\n");
	for (int i = 1; i < 4; ++i)
		{ft_lstadd_back(&l, ft_lstnew(tab + i));
		printf("%d", ((int *)l->content)[i]);}
}*/
/* 
void ft_putstr(char *str);
#include <stdio.h>
int main ()
{
	t_list *a;
	a = NULL;
	ft_lstadd_back(&a, ft_lstnew("hello "));
	ft_lstadd_back(&a, ft_lstnew("world"));
	ft_lstiter(a, (void (*)(void *))ft_putstr);
}
void ft_putstr(char *str)
{
	while(*str)
	write(1, str++, 1);
} */