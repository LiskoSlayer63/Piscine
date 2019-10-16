/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 21:02:39 by mahola            #+#    #+#             */
/*   Updated: 2019/08/15 21:07:58 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stduni.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int tmp;

	tmp = -1;
	while(++tmp <= 9)
}

int main()
{
	ft_print_combn(1);
	ft_putchar('\n');
	ft_print_combn(2);
	ft_putchar('\n');
	ft_print_combn(3);
	return (0);
}
