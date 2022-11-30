/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbellucc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:10:14 by vbellucc          #+#    #+#             */
/*   Updated: 2022/01/19 10:57:12 by vbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	if (dst == src || n == 0)
		return (dst);
	i = 0;
	a = (char *) dst;
	b = (char *) src;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}
