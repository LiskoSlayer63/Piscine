/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 18:57:38 by mahola            #+#    #+#             */
/*   Updated: 2019/08/29 21:00:33 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"

void	ft_display_file(char *filename)
{
	char	data[BUF_SIZE];
	int		file;
	int		cur;

	if ((file = open(filename, O_RDONLY)) >= 0)
	{
		while ((cur = read(file, data, BUF_SIZE - 1)) > 0)
		{
			data[cur] = '\0';
			ft_putstr(data);
		}
		close(file);
	}
}
