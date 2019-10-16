/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 16:35:37 by mahola            #+#    #+#             */
/*   Updated: 2019/08/21 17:39:01 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int	*out;

	i = 0;
	if (min >= max || !(out = (int *)malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (min + i < max)
	{
		out[i] = min + i;
		i++;
	}
	return (out);
}
