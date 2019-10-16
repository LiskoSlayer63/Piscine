/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 20:26:57 by mahola            #+#    #+#             */
/*   Updated: 2019/08/14 21:16:43 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_is_negative(int n);

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int main()
{
	ft_is_negative(0);
	ft_is_negative(1);
	ft_is_negative(-1);
	ft_is_negative(20);
	return (0);
}
