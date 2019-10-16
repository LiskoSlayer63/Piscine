/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 01:37:26 by mahola            #+#    #+#             */
/*   Updated: 2019/08/29 04:34:25 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_error(int err, char *file)
{
	extern char	*sys_errlist[];
	extern int	sys_nerr;
	char		*errstr;

	if (err < 0)
		err *= -1;
	if (err < sys_nerr)
		errstr = sys_errlist[err];
	else
		errstr = "Unknown error";
	ft_puterrstr(g_filename);
	ft_puterrstr(": ");
	ft_puterrstr(file);
	ft_puterrstr(": ");
	ft_puterrstr(errstr);
	ft_puterrchar('\n');
}
