/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:34:54 by obektas           #+#    #+#             */
/*   Updated: 2022/10/22 22:04:42 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
#include <stdio.h>
int main(void)
{	
	char	str[] = "oktay";
	t_list		*new;
	new = ft_lstnew(str);
	printf("%s",new->content);
} 
#include <stdio.h>
int main(void)
{	
	t_list		*new;
	int a[] ={1,2,3};
	new = ft_lstnew(a);
	printf("%d",((int *)new->content)[0]);
}*/