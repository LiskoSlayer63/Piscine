/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 22:11:56 by mahola            #+#    #+#             */
/*   Updated: 2019/08/29 02:20:18 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_display_file(char *filename)
{
	int		file;

	if ((file = open(filename, O_RDONLY)) != -1)
	{
		ft_read(file, filename);
		close(file);
	}
	else
		ft_error(errno, filename);
}
