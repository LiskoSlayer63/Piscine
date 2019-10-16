/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 11:47:30 by mahola            #+#    #+#             */
/*   Updated: 2019/08/23 12:03:02 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_matches(int *tab, int length, int match)
{
	int count;
	int i;

	i = -1;
	count = 0;
	while (++i < length)
		if (tab[i] == match)
			count++;
	return (count);
}

int		ft_unmatch(int *tab, int length)
{
	int i;

	i = -1;
	while (++i < length)
		if (ft_count_matches(tab, length, tab[i]) % 2)
			return (tab[i]);
	return (0);
}
