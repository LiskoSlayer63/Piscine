/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_determine.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 20:47:09 by mahola            #+#    #+#             */
/*   Updated: 2019/09/01 21:54:33 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		*ft_determine(char *lines, int width, int height)
{
	int	*rush;

	if (!(rush = (int*)malloc(sizeof(int) * 5)))
		return (NULL);
	rush[0] = !ft_strcmp(lines, rush00(width, height)) && width && height;
	rush[1] = !ft_strcmp(lines, rush01(width, height)) && width && height;
	rush[2] = !ft_strcmp(lines, rush02(width, height)) && width && height;
	rush[3] = !ft_strcmp(lines, rush03(width, height)) && width && height;
	rush[4] = !ft_strcmp(lines, rush04(width, height)) && width && height;
	return (rush);
}

int		ft_print(int *rush, int width, int height)
{
	int		i;
	int		ok;

	i = 0;
	ok = 0;
	while (i < 5)
	{
		if (rush[i] && ok)
			ft_putstr(" || ");
		if (rush[i])
		{
			ft_putstr("[rush-0");
			ft_putnbr(i);
			ft_putstr("] [");
			ft_putnbr(width);
			ft_putstr("] [");
			ft_putnbr(height);
			ft_putstr("]");
			ok++;
		}
		i++;
	}
	return (ok);
}
