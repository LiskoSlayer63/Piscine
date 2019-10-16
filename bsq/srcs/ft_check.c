/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 22:10:48 by mahola            #+#    #+#             */
/*   Updated: 2019/09/04 23:25:10 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	ft_solve(char *str)
{
	int	arr[3];
	int	**out;

	if (!(out = (int**)malloc(sizeof(int*) * g_height)))
		return ;
	arr[0] = -1;
	arr[1] = 0;
	arr[2] = 0;
	while (str[arr[2]] != '\n')
		arr[2]++;
	while (++arr[0] < g_height)
	{
		arr[1] = 0;
		if (!(out[arr[0]] = (int*)malloc(sizeof(int) * g_width)))
			return ;
		while (arr[1] < g_width)
			if (str[++arr[2]] != '\n')
			{
				if (str[arr[2]] == g_chars[0])
					out[arr[0]][arr[1]++] = 1;
				else if (str[arr[2]] == g_chars[1])
					out[arr[0]][arr[1]++] = 0;
			}
	}
	ft_set(out);
}

void	ft_set(int **arr)
{
	int		i;
	int		j;

	i = 1;
	while (i < g_height)
	{
		j = 1;
		while (j < g_width)
		{
			if ((arr)[i][j])
				(arr)[i][j] = ft_min((arr)[i - 1][j],
				(arr)[i][j - 1], (arr)[i - 1][j - 1]) + 1;
			j++;
		}
		i++;
	}
	ft_find(arr);
}

void	ft_find(int **arr)
{
	int max;
	int max_x;
	int max_y;
	int i;
	int j;

	max = 0;
	max_x = 0;
	max_y = 0;
	i = -1;
	while (++i < g_height)
	{
		j = -1;
		while (++j < g_width)
		{
			if ((arr)[i][j] > max)
			{
				max = (arr)[i][j];
				max_x = j;
				max_y = i;
			}
		}
	}
	ft_replace(arr, max_x, max_y, max);
}

void	ft_replace(int **arr, int max_x, int max_y, int max)
{
	int i;
	int j;

	i = max_y;
	while (i > (max_y - max))
	{
		j = max_x;
		while (j > (max_x - max))
		{
			(arr)[i][j] = -1;
			j--;
		}
		i--;
	}
	ft_print(arr);
}

void	ft_print(int **arr)
{
	char	*out;
	int		i;
	int		j;
	int		k;

	i = -1;
	k = 0;
	if (!(out = (char*)malloc(sizeof(char) * ((g_width + 1) * (g_height + 1)))))
		return ;
	while (++i < g_height)
	{
		j = -1;
		while (++j < g_width)
			if ((arr)[i][j] == 0)
				out[k++] = g_chars[1];
			else if ((arr)[i][j] == -1)
				out[k++] = g_chars[2];
			else
				out[k++] = g_chars[0];
		out[k++] = '\n';
	}
	out[k] = '\0';
	write(1, out, k);
	free(out);
	ft_free(arr);
}
