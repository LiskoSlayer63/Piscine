/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 05:30:57 by mahola            #+#    #+#             */
/*   Updated: 2019/08/30 21:08:23 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int		ft_atoi(char *str)
{
	int i;
	int out;

	out = 0;
	i = -1;
	while (str[++i] && str[i] >= '0' && str[i] <= '9')
		out = out * 10 + (str[i] - '0');
	return (out);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
