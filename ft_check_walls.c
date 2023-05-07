/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_walls.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:03:12 by obektas           #+#    #+#             */
/*   Updated: 2023/05/06 17:03:13 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static	void	ft_check_bottom_wall(char **map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i])
		i++;
	i--;
	if (i < 2)
	{
		ft_printf("Error\n");
		exit (1);
	}
	while (map[i][j])
	{
		if (map[i][j] != '1')
		{
			ft_printf("Bottom Wall Error\n");
			exit(1);
		}
		j++;
	}
}

static	void	ft_check_top_wall(char **map)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (map[j])
		j++;
	j--;
	while (map[0][i] != '\n' && map[0][i])
	{
		if (map[0][i] != '1')
		{
			ft_printf ("Top Wall Error\n");
			exit (1);
		}
		i++;
	}
	i--;
	if (i < 2)
	{
		ft_printf ("Map Shape Error\n");
		exit (1);
	}
}

void	ft_check_walls(char **map)
{
	ft_check_top_wall(map);
	ft_check_bottom_wall(map);
	ft_check_side_walls(map);
	ft_check_side_walls_2(map);
}
