/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paintfct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:52:01 by vbellucc          #+#    #+#             */
/*   Updated: 2022/11/30 11:13:28 by vbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	putpath(int x, int y, t_so_long *mypath)
{
	mlx_put_image_to_window(mypath->mlx, mypath->window, mypath->path,
		x * 100, y * 100);
}

void	putwall(int x, int y, t_so_long *mywall)
{
	mlx_put_image_to_window(mywall->mlx, mywall->window, mywall->wall,
		x * 100, y * 100);
}

void	putplayer_up(int x, int y, t_so_long *myplayerimg)
{
	mlx_put_image_to_window(myplayerimg->mlx, myplayerimg->window,
		myplayerimg->playerup, x * 100, y * 100);
}

void	put_collect(int x, int y, t_so_long *mycollect)
{
	mlx_put_image_to_window(mycollect->mlx, mycollect->window,
		mycollect->collect, x * 100, y * 100);
}

void	putexit(int x, int y, t_so_long *myexitus)
{
	mlx_put_image_to_window(myexitus->mlx, myexitus->window, myexitus->exitus,
		x * 100, y * 100);
}
