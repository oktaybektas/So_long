/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:03:01 by obektas           #+#    #+#             */
/*   Updated: 2023/05/06 17:03:02 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_path(t_map *map)
{
	t_map	clone;

	ft_memcpy(&clone, map, sizeof(t_map));
	ft_move_around(&clone, clone.player[0], clone.player[1]);
	if (clone.collectible_status < map ->collectible_nbr || clone.ex_status)
	{
		ft_printf("Map does not have a valid path!\n");
		exit (1);
	}
}
