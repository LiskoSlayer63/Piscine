/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 19:10:39 by mahola            #+#    #+#             */
/*   Updated: 2019/08/26 20:32:54 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_operators.h"
#include "ft_lib.h"

int		get_op(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	if (i > 1)
		return (-1);
	if (str[0] == '+')
		return (0);
	if (str[0] == '-')
		return (1);
	if (str[0] == '*')
		return (2);
	if (str[0] == '/')
		return (3);
	if (str[0] == '%')
		return (4);
	return (-1);
}

int		do_op(int n1, int n2, int op)
{
	if (op >= 0 && op < 5)
		return (g_ft_op[op](n1, n2));
	return (0);
}

int		main(int argc, char **argv)
{
	int n1;
	int n2;
	int op;

	if (argc != 4)
		return (0);
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	op = get_op(argv[2]);
	if ((op == 3 || op == 4) && n2 == 0)
	{
		if (op == 3)
			ft_putstr(ERROR("division"));
		else
			ft_putstr(ERROR("modulo"));
		ft_putchar('\n');
		return (0);
	}
	ft_putnbr(do_op(n1, n2, op));
	ft_putchar('\n');
	return (0);
}
