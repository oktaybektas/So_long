/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_items.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:02:45 by obektas           #+#    #+#             */
/*   Updated: 2023/05/06 17:02:48 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static	void	ft_check(char **map, char c)
{
	int	i;
	int	j;
	int	total;

	i = -1;
	total = 0;
	j = -1;
	while (map[++i])
	{
		while (map[i][++j])
		{
			if (map[i][j] == c)
				total++;
		}
		j = -1;
	}
	if (((total == 0 || total > 1) && (c == 'P' || c == 'E'))
		|| ((c == 'C' || c == '0') && total == 0))
	{
		ft_printf ("Item Error\n");
		exit (1);
	}
}

void	ft_check_items(char **map)
{
	ft_check(map, 'E');
	ft_check(map, 'P');
	ft_check(map, 'C');
	ft_check(map, '0');
}
