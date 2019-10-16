/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 01:50:35 by mahola            #+#    #+#             */
/*   Updated: 2019/08/29 21:02:30 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_read(int file, char *filename)
{
	char	data[BUF_SIZE];
	int		cur;

	while ((cur = read(file, data, BUF_SIZE - 1)))
	{
		if (cur < 0)
		{
			ft_error(errno, filename);
			break ;
		}
		data[cur] = '\0';
		ft_putstr(data);
	}
}
