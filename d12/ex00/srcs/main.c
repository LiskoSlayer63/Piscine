/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 19:39:07 by mahola            #+#    #+#             */
/*   Updated: 2019/08/29 04:02:29 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	ft_display_file(argv[1]);
	return (0);
}
