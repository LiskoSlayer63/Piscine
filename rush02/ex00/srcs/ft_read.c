/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 19:17:38 by mahola            #+#    #+#             */
/*   Updated: 2019/09/01 19:35:38 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

char	*ft_read_stdin(int *width, int *height)
{
	char	*lines;
	char	c;

	lines = "";
	while (read(0, &c, 1))
	{
		ft_append_str(&lines, c);
		if (!(*height) && c != '\n')
			(*width)++;
		if (c == '\n')
			(*height)++;
	}
	return (lines);
}
