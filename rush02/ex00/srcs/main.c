/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 19:29:17 by mahola            #+#    #+#             */
/*   Updated: 2019/09/01 21:38:41 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		main(void)
{
	int		width;
	int		height;
	int		*rush;

	width = 0;
	height = 0;
	rush = ft_determine(ft_read_stdin(&width, &height), width, height);
	if (!width || !height || !ft_print(rush, width, height))
		ft_putstr("Input error.");
	ft_putstr("\n");
	return (0);
}
