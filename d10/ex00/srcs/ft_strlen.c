/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 16:13:45 by mahola            #+#    #+#             */
/*   Updated: 2019/08/26 16:44:33 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (ABS(i));
}