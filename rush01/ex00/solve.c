/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enissine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 18:33:31 by enissine          #+#    #+#             */
/*   Updated: 2019/08/25 20:40:31 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isinrow(char **matrice, int row, char num);
int		isinbox(char **matrice, int col, int row, char num);
int		isincol(char **matrice, int col, char num);
int		ispossible(char **matrice, char num, int row, int col);
int		solve(char **matrice);

int		check(char **matrice, int row, int col)
{
	char num;

	num = '1';
	while (num <= '9')
	{
		if (ispossible(matrice, num, row, col) == 1)
		{
			matrice[row][col] = num;
			if (solve(matrice) == 1)
				return (1);
			else
				matrice[row][col] = '.';
		}
		num++;
	}
	return (0);
}

int		solve(char **matrice)
{
	int col;
	int row;
	int num;

	col = 0;
	row = 0;
	num = '1';
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			if (matrice[row][col] == '.')
				return (check(matrice, row, col));
			col++;
		}
		row++;
	}
	return (1);
}
