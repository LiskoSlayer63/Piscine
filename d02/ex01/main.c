/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 20:26:57 by mahola            #+#    #+#             */
/*   Updated: 2019/08/14 22:46:43 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int main()
{
	ft_print_reverse_alphabet();
	return (0);
}