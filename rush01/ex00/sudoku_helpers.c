/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_helpers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 20:12:53 by mahola            #+#    #+#             */
/*   Updated: 2019/08/25 21:30:53 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isvalidsize(char **matrice);
int		checkchars(char **matrice);
int		checkrows(char **matrice);

int		isinrow(char **matrice, int row, char num)
{
	int i;

	i = 0;
	while (matrice[row][i])
	{
		if (matrice[row][i] == num)
			return (1);
		i++;
	}
	return (0);
}

int		isinbox(char **matrice, int col, int row, char num)
{
	int r;
	int c;
	int move;

	r = row - (row % 3);
	c = col - (col % 3);
	move = 3;
	while (move > 0)
	{
		if (matrice[r][c] == num)
			return (1);
		if (matrice[r + 1][c] == num)
			return (1);
		if (matrice[r + 2][c] == num)
			return (1);
		c++;
		move--;
	}
	return (0);
}

int		isincol(char **matrice, int col, char num)
{
	int i;

	i = 0;
	while (matrice[i])
	{
		if (matrice[i][col] == num)
			return (1);
		i++;
	}
	return (0);
}

int		ispossible(char **matrice, char num, int row, int col)
{
	if (isinrow(matrice, row, num) == 0 && isincol(matrice, col, num) == 0 &&
		isinbox(matrice, col, row, num) == 0)
	{
		return (1);
	}
	else
		return (0);
}

int		isvalid(char **matrice)
{
	if (!isvalidsize(matrice))
		return (0);
	if (!checkchars(matrice))
		return (0);
	if (!checkrows(matrice))
		return (0);
	return (1);
}
