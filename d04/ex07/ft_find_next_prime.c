/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 16:35:36 by mahola            #+#    #+#             */
/*   Updated: 2019/08/17 17:48:25 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int tmp;
	int i;
	int found;

	tmp = nb - 1;
	found = 0;
	if (tmp < 1)
	{
		tmp = 1;
	}
	while (found == 0)
	{
		tmp++;
		found = 1;
		i = tmp;
		while (--i > 1)
		{
			if (tmp % i == 0)
			{
				found = 0;
				break ;
			}
		}
	}
	return (tmp);
}
