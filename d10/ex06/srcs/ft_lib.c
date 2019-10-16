/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 19:26:21 by mahola            #+#    #+#             */
/*   Updated: 2019/08/26 20:27:59 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	long tmp;

	tmp = nbr;
	if (tmp < 0)
	{
		ft_putchar('-');
		tmp *= -1;
	}
	if (tmp >= 10)
		ft_putnbr(tmp / 10);
	ft_putchar(tmp % 10 + 48);
}

int		ft_atoi(char *str)
{
	unsigned long long	out;
	int					neg;
	int					i;

	out = 0;
	neg = 1;
	i = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' ||
		str[i] == ' ' || str[i] == '\f' || str[i] == '\r' || str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		out = out * 10 + (str[i] - '0');
		i++;
	}
	if (out > 9223372036854775807 && neg == -1)
		return (0);
	else if (out > 9223372036854775807)
		return (-1);
	return (out * neg);
}
