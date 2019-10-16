/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 19:40:57 by mahola            #+#    #+#             */
/*   Updated: 2019/09/01 22:05:02 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

char	*rush03(int x, int y)
{
	int		i;
	int		j;
	char	*out;

	if (x < 1 || y < 1)
		return ("");
	if (!(out = (char*)malloc(sizeof(char) * ((x + 1) * y) + 1)))
		return ("");
	i = 0;
	j = 0;
	while (i < y)
	{
		if (i == 0)
			ft_row(x, "ABC", &out, &j);
		else if (i == y - 1)
			ft_row(x, "ABC", &out, &j);
		else
			ft_row(x, "B B", &out, &j);
		i++;
	}
	out[j] = '\0';
	return (out);
}
