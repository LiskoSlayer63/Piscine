/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 17:18:45 by mahola            #+#    #+#             */
/*   Updated: 2019/08/26 17:43:34 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *out;

	i = 0;
	if (!(out = (int*)malloc(sizeof(int) * length)))
		return (NULL);
	while (i < length)
	{
		out[i] = f(tab[i]);
		i++;
	}
	return (out);
}
