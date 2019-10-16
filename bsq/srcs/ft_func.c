/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 19:16:52 by mahola            #+#    #+#             */
/*   Updated: 2019/09/04 23:28:26 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	ft_checksolve(char *str)
{
	if (ft_errorcheck(str))
	{
		write(2, "map error\n", 10);
		return ;
	}
	ft_solve(str);
}

int		ft_min(int i1, int i2, int i3)
{
	int out;

	out = i1;
	if (i2 < out)
		out = i2;
	if (i3 < out)
		out = i3;
	return (out);
}

void	ft_read_help(int pipe)
{
	char *lines;

	lines = ft_read_input(pipe);
	ft_checksolve(lines);
	free(lines);
}

void	ft_free(int **arr)
{
	int i;

	i = -1;
	while (++i < g_height)
		if (arr[i])
			free(arr[i]);
	if (arr)
		free(arr);
}
