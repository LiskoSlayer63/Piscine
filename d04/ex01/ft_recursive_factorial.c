/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 00:40:35 by mahola            #+#    #+#             */
/*   Updated: 2019/08/17 02:27:07 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	if (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (nb);
}
