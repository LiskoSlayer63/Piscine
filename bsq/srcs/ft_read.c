/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 19:17:38 by mahola            #+#    #+#             */
/*   Updated: 2019/09/04 23:29:21 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	ft_realloc(char **str, int *buf_size)
{
	char	*out;
	int		i;

	i = 0;
	*buf_size = *buf_size * 2;
	if (!(out = (char*)malloc(sizeof(char) * (*buf_size))))
		return ;
	while (i < *buf_size / 2)
	{
		out[i] = (*str)[i];
		i++;
	}
	free(*str);
	*str = out;
}

void	ft_strcpy(char **s1, char *s2, int total)
{
	int j;

	j = 0;
	while (s2[j])
	{
		(*s1)[total + j] = s2[j];
		j++;
	}
	(*s1)[total + j] = '\0';
}

char	*ft_read_input(int pipe)
{
	char	*lines;
	char	c[8192];
	int		alloc_size;
	int		total;
	int		i;

	alloc_size = 8192;
	total = 0;
	if (!(lines = (char*)malloc(sizeof(char) * alloc_size)))
		return (NULL);
	while ((i = read(pipe, &c, 8192)))
	{
		c[i] = '\0';
		if (total + i >= alloc_size)
			ft_realloc(&lines, &alloc_size);
		ft_strcpy(&lines, c, total);
		total += i;
	}
	ft_put_globals(lines);
	return (lines);
}

void	ft_put_globals(char *str)
{
	int	i;
	int n;
	int l;

	g_width = 0;
	g_height = 0;
	i = 0;
	n = 0;
	l = 0;
	if (!g_chars)
		if (!(g_chars = (char*)malloc(sizeof(char) * 3)))
			return ;
	while (str[l] && str[l] != '\n')
		l++;
	while (str[i] && str[i] != '\n')
	{
		if (str[i] >= '0' && str[i] <= '9' && l - i > 3)
			g_height = g_height * 10 + (str[i] - '0');
		else
			g_chars[i - l + 3] = str[i];
		i++;
	}
	while (str[++i] && str[i] != '\n')
		g_width++;
}

void	ft_read(int argc, char **argv)
{
	int		arr[2];

	if (argc > 1)
	{
		arr[0] = 0;
		while (++arr[0] < argc)
			if ((arr[1] = open(argv[arr[0]], O_RDONLY)) > 0)
			{
				ft_read_help(arr[1]);
				close(arr[1]);
				if (arr[0] + 1 < argc)
					write(1, "\n", 1);
			}
			else
			{
				write(2, "map error\n", 10);
				if (arr[0] + 1 < argc)
					write(2, "\n", 1);
			}
	}
	else
		ft_read_help(0);
}
