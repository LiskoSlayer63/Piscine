/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:43:29 by mahola            #+#    #+#             */
/*   Updated: 2019/08/17 18:43:46 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
	{
		return (0);
	}
	i = nb;
	while (--i > 1)
	{
		if (nb % i == 0)
		{
			return (0);
		}
	}
	return (1);
}