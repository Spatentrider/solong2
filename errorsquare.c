/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorsquare.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:51:36 by vbellucc          #+#    #+#             */
/*   Updated: 2022/11/30 13:24:13 by vbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	checksquare(t_so_long *game)
{
	int	index;
	int	first_lwidth;

	first_lwidth = ft_strlen(game->map.map[0]);
	index = 1;
	while (index < game->img_height)
	{
		if ((int)ft_strlen(game->map.map[index]) != first_lwidth)
			return (-1);
		index++;
	}
	return (0);
}

void	putplayer_left(int x, int y, t_so_long *myplayerimg)
{
	mlx_put_image_to_window(myplayerimg->mlx, myplayerimg->window,
		myplayerimg->playerleft, x * 100, y * 100);
}

void	putplayer_right(int x, int y, t_so_long *myplayerimg)
{
	mlx_put_image_to_window(myplayerimg->mlx, myplayerimg->window,
		myplayerimg->playerright, x * 100, y * 100);
}

void	putplayer_down(int x, int y, t_so_long *myplayerimg)
{
	mlx_put_image_to_window(myplayerimg->mlx, myplayerimg->window,
		myplayerimg->playerdown, x * 100, y * 100);
}
