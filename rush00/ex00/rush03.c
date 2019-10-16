/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 05:32:47 by mahola            #+#    #+#             */
/*   Updated: 2019/09/01 22:42:07 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_row(int x, char start, char pad, char end)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar(start);
		else if (i == x - 1)
			ft_putchar(end);
		else
			ft_putchar(pad);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	if (x < 1 || y < 1)
		return ;
	i = 0;
	while (i < y)
	{
		if (i == 0)
			ft_row(x, 'A', 'B', 'C');
		else if (i == y - 1)
			ft_row(x, 'A', 'B', 'C');
		else
			ft_row(x, 'B', ' ', 'B');
		i++;
	}
}
