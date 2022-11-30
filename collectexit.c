/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collectexit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <vbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:51:24 by vbellucc          #+#    #+#             */
/*   Updated: 2022/11/30 14:19:10 by vbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	count_collectible(t_so_long *game)
{
	int	screencol;

	game->collectible--;
	screencol = game->colsum - game->collectible;
}

void	check_collectible(t_so_long *game)
{
	if (game->collectible == 0)
	{
		exit (0);
	}
}

void	count_steps(t_so_long *game)
{
	game->steps++;
	write(1, "\nSteps taken:", 13);
	ft_putnbr_fd(game->steps, 1);
}
