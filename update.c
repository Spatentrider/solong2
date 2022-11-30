/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:53:03 by vbellucc          #+#    #+#             */
/*   Updated: 2022/11/30 13:28:18 by vbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	update_w(int width, int height, t_so_long *game)
{
	updatemap(width, height, game);
	updatefield(width, height, game);
}

void	update_a(int width, int height, t_so_long *game)
{
	updatemap(width, height, game);
	updatefield_left(width, height, game);
}

void	update_s(int width, int height, t_so_long *game)
{
	updatemap(width, height, game);
	updatefield_down(width, height, game);
}

void	update_d(int width, int height, t_so_long *game)
{
	updatemap(width, height, game);
	updatefield_right(width, height, game);
}
