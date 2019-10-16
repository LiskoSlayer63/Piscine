/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enissine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 17:21:38 by enissine          #+#    #+#             */
/*   Updated: 2019/08/25 21:28:17 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		solve(char **matrice);
int		isvalid(char **matrice);

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

void	fill_matrice(char **matrice, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == 46)
				matrice[(i - 1)][j] = '.';
			else
				matrice[(i - 1)][j] = (argv[i][j]);
			j++;
		}
		i++;
	}
}

void	print(char **matrice)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (matrice[i])
	{
		j = 0;
		while (matrice[i][j])
		{
			ft_putchar(matrice[i][j]);
			if (j < 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	**matrice;
	int		i;

	i = 0;
	matrice = (char**)malloc(9 * sizeof(char*));
	while (i < 9)
	{
		matrice[i] = (char*)malloc(9 * sizeof(char));
		i++;
	}
	if (argc == 10)
		fill_matrice(matrice, argv);
	else
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (isvalid(matrice) && solve(matrice))
		print(matrice);
	else
		ft_putstr("Error\n");
	return (0);
}
