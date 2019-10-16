/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 21:16:34 by mahola            #+#    #+#             */
/*   Updated: 2019/08/23 21:18:36 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(void)
{
	char **arr = ft_split_whitespaces("      sana");

	int i = 0;
	while (arr[i] != '\0')
	{
		printf("%s\n", arr[i]);
		i++;
	}
	return (0);
}
