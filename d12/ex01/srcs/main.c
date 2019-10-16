/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 22:09:14 by mahola            #+#    #+#             */
/*   Updated: 2019/08/29 02:30:43 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_put_filename(char *path)
{
	char *parse;

	parse = 0;
	while (*path)
	{
		if (*path == '/')
			parse = path + 1;
		path++;
	}
	if (parse)
		g_filename = parse;
	else
		g_filename = path;
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	ft_put_filename(argv[0]);
	while (i < argc)
	{
		if (argc < 2 || argv[i][0] == '-')
			ft_read(1, "");
		if (i > 0)
			ft_display_file(argv[i]);
		i++;
	}
	return (0);
}
