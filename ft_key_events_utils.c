/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_events_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:03:30 by obektas           #+#    #+#             */
/*   Updated: 2023/05/06 17:03:31 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "mlx.h"

void	ft_move_up(t_map *vars)
{
	int	i;

	if (ft_compare_locations(vars -> player[0],
			vars -> player[1] - 64, vars -> wall, vars -> wall_nbr) != -1)
		return ;
	vars -> player[1] -= 64;
	mlx_put_image_to_window(vars -> obj -> mlx, vars -> obj -> mlx_window,
		vars -> obj -> player, vars -> player[0], vars -> player[1]);
	mlx_put_image_to_window(vars -> obj -> mlx, vars -> obj -> mlx_window,
		vars -> obj -> space, vars -> player[0], vars -> player[1] + 64);
	if (ft_compare_locations(vars -> player[0], vars -> player[1],
			vars -> collectible, vars -> collectible_nbr) != -1)
	{
		i = ft_compare_locations(vars -> player[0], vars -> player[1],
				vars -> collectible, vars -> collectible_nbr);
		vars -> collectible[i][0][0] = 0;
		vars -> collectible[i][0][1] = 0;
		vars -> collectible_status++;
	}
	if ((vars -> player[0] == vars -> ex[0]
			&& vars -> player[1] == vars -> ex[1])
		&& vars -> collectible_status == vars -> collectible_nbr)
		ft_exit(vars, 1);
	ft_print(vars);
}

void	ft_move_down(t_map *vars)
{
	int	i;

	if (ft_compare_locations(vars -> player[0],
			vars -> player[1] + 64, vars -> wall, vars -> wall_nbr) != -1)
		return ;
	vars -> player[1] += 64;
	mlx_put_image_to_window(vars -> obj -> mlx, vars -> obj -> mlx_window,
		vars -> obj -> player, vars -> player[0], vars -> player[1]);
	mlx_put_image_to_window(vars -> obj -> mlx, vars -> obj -> mlx_window,
		vars -> obj -> space, vars -> player[0], vars -> player[1] - 64);
	if (ft_compare_locations(vars -> player[0], vars -> player[1],
			vars -> collectible, vars -> collectible_nbr) != -1)
	{
		i = ft_compare_locations(vars -> player[0], vars -> player[1],
				vars -> collectible, vars -> collectible_nbr);
		vars -> collectible[i][0][0] = 0;
		vars -> collectible[i][0][1] = 0;
		vars -> collectible_status++;
	}
	if ((vars -> player[0] == vars -> ex[0]
			&& vars -> player[1] == vars -> ex[1])
		&& vars -> collectible_status == vars -> collectible_nbr)
		ft_exit(vars, 1);
	ft_print(vars);
}

void	ft_move_left(t_map *vars)
{
	int	i;

	if (ft_compare_locations(vars -> player[0] - 64,
			vars -> player[1], vars -> wall, vars -> wall_nbr) != -1)
		return ;
	vars -> player[0] -= 64;
	mlx_put_image_to_window(vars -> obj -> mlx, vars -> obj -> mlx_window,
		vars -> obj -> player, vars -> player[0], vars -> player[1]);
	mlx_put_image_to_window(vars -> obj -> mlx, vars -> obj -> mlx_window,
		vars -> obj -> space, vars -> player[0] + 64, vars -> player[1]);
	if (ft_compare_locations(vars -> player[0], vars -> player[1],
			vars -> collectible, vars -> collectible_nbr) != -1)
	{
		i = ft_compare_locations(vars -> player[0], vars -> player[1],
				vars -> collectible, vars -> collectible_nbr);
		vars -> collectible[i][0][0] = 0;
		vars -> collectible[i][0][1] = 0;
		vars -> collectible_status++;
	}
	if ((vars -> player[0] == vars -> ex[0]
			&& vars -> player[1] == vars -> ex[1])
		&& vars -> collectible_status == vars -> collectible_nbr)
		ft_exit(vars, 1);
	ft_print(vars);
}

void	ft_move_right(t_map *vars)
{
	int	i;

	if (ft_compare_locations(vars -> player[0] + 64,
			vars -> player[1], vars -> wall, vars -> wall_nbr) != -1)
		return ;
	vars -> player[0] += 64;
	mlx_put_image_to_window(vars -> obj -> mlx, vars -> obj -> mlx_window,
		vars -> obj -> player, vars -> player[0], vars -> player[1]);
	mlx_put_image_to_window(vars -> obj -> mlx, vars -> obj -> mlx_window,
		vars -> obj -> space, vars -> player[0] - 64, vars -> player[1]);
	if (ft_compare_locations(vars -> player[0], vars -> player[1],
			vars -> collectible, vars -> collectible_nbr) != -1)
	{
		i = ft_compare_locations(vars -> player[0], vars -> player[1],
				vars -> collectible, vars -> collectible_nbr);
		vars -> collectible[i][0][0] = 0;
		vars -> collectible[i][0][1] = 1;
		vars -> collectible_status++;
	}
	if ((vars -> player[0] == vars -> ex[0]
			&& vars -> player[1] == vars -> ex[1])
		&& vars -> collectible_status == vars -> collectible_nbr)
		ft_exit(vars, 1);
	ft_print(vars);
}

void	ft_print(t_map *vars)
{
	char	*str;

	++vars -> move;
	str = ft_itoa(vars -> move);
	ft_printf ("%s\n", str);
	free(str);
}
