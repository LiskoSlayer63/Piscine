/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 09:43:23 by mahola            #+#    #+#             */
/*   Updated: 2019/08/23 09:49:50 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int i;
	int max;

	i = -1;
	max = 0;
	if (length > 0)
		max = tab[0];
	while (++i < length)
		if (tab[i] > max)
			max = tab[i];
	return (max);
}
