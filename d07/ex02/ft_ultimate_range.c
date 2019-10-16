/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 18:34:17 by mahola            #+#    #+#             */
/*   Updated: 2019/08/21 20:19:44 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tmp;
	int i;

	i = 0;
	if (min >= max || !(tmp = (int *)malloc(sizeof(int) * (max - min))))
	{
		*range = NULL;
		return (0);
	}
	while (min + i < max)
	{
		tmp[i] = min + i;
		i++;
	}
	*range = tmp;
	return (i);
}
