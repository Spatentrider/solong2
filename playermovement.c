/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playermovement.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:52:37 by vbellucc          #+#    #+#             */
/*   Updated: 2022/11/30 13:28:13 by vbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	updatefield_left(int x, int y, t_so_long *mypath)
{
	int	y_next;
	int	x_next;

	y_next = mypath->myplayer.vertical;
	x_next = mypath->myplayer.horizontal;
	if (mypath->map.map[y][x] == 'E' || mypath->map.map[y][x] == 'G')
	{
		putplayer_left(x_next, y_next, mypath);
		putpath(x, y, mypath);
		putexit(x, y, mypath);
	}
	else if (mypath->map.map[y_next][x_next] == '1')
	{
		putpath(x, y, mypath);
	}
	else
	{
		putpath(x, y, mypath);
		putplayer_left(x_next, y_next, mypath);
	}
}

void	updatefield_right(int x, int y, t_so_long *mypath)
{
	int	y_next;
	int	x_next;

	y_next = mypath->myplayer.vertical;
	x_next = mypath->myplayer.horizontal;
	if (mypath->map.map[y][x] == 'E' || mypath->map.map[y][x] == 'G')
	{
		putplayer_right(x_next, y_next, mypath);
		putpath(x, y, mypath);
		putexit(x, y, mypath);
	}
	else if (mypath->map.map[y_next][x_next] == '1')
	{
		putpath(x, y, mypath);
	}
	else
	{
		putpath(x, y, mypath);
		putplayer_right(x_next, y_next, mypath);
	}
}

void	updatefield_down(int x, int y, t_so_long *mypath)
{
	int	y_next;
	int	x_next;

	y_next = mypath->myplayer.vertical;
	x_next = mypath->myplayer.horizontal;
	if (mypath->map.map[y][x] == 'E' || mypath->map.map[y][x] == 'G')
	{
		putplayer_down(x_next, y_next, mypath);
		putpath(x, y, mypath);
		putexit(x, y, mypath);
	}
	else if (mypath->map.map[y_next][x_next] == '1')
	{
		putpath(x, y, mypath);
	}
	else
	{
		putpath(x, y, mypath);
		putplayer_down(x_next, y_next, mypath);
	}
}
