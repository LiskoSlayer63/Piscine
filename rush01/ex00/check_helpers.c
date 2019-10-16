/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_helpers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 21:06:10 by mahola            #+#    #+#             */
/*   Updated: 2019/08/25 21:48:02 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isvalidsize(char **matrice)
{
	int row;
	int col;

	row = 0;
	while (matrice[row])
	{
		col = 0;
		while (matrice[row][col])
			col++;
		if (col != 9)
			return (0);
		row++;
	}
	return (row == 9 ? 1 : 0);
}

int		checkchars(char **matrice)
{
	int row;
	int col;

	row = 0;
	while (matrice[row])
	{
		col = 0;
		while (matrice[row][col])
		{
			if ((matrice[row][col] < '1' || matrice[row][col] > '9') &&
					matrice[row][col] != '.')
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}

int		countnbr(char *row, char nbr)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (nbr == '.')
		return (0);
	while (row[i])
	{
		if (row[i] == nbr)
			count++;
		i++;
	}
	return (count);
}

int		checkrows(char **matrice)
{
	int row;
	int col;

	row = 0;
	while (matrice[row])
	{
		col = 0;
		while (matrice[row][col])
		{
			if (countnbr(matrice[row], matrice[row][col]) > 1)
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}
