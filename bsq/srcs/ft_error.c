/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 04:15:57 by mahola            #+#    #+#             */
/*   Updated: 2019/09/04 17:57:55 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		ft_errorcheck(char *str)
{
	if (ft_errorsize(str))
		return (1);
	if (ft_errorchars(str))
		return (1);
	return (0);
}

int		ft_errorsize(char *str)
{
	int width;
	int height;
	int i;

	width = 0;
	height = 0;
	i = 0;
	if (!g_height || !g_width)
		return (1);
	while (str[i] && str[i] != '\n')
		i++;
	while (str[++i])
	{
		if (str[i] == '\n')
		{
			if (width != g_width)
				return (1);
			width = 0;
			height++;
			continue ;
		}
		width++;
	}
	return (height != g_height);
}

int		ft_errorchars(char *str)
{
	int box;
	int i;

	i = 0;
	box = 0;
	while (str[i] && str[i] != '\n')
		i++;
	while (str[++i])
	{
		if (str[i] != g_chars[0] && str[i] != g_chars[1] && str[i] != '\n')
			return (1);
		if (str[i] == g_chars[0])
			box++;
	}
	return (!box);
}
