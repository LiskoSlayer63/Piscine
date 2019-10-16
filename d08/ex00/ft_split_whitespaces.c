/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 22:57:15 by mahola            #+#    #+#             */
/*   Updated: 2019/08/23 21:25:18 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_whitespace(char c)
{
	if (c == '\t' || c == ' ' || c == '\n')
		return (1);
	return (0);
}

int		ft_count_chars(char *str, int index)
{
	int count;

	count = 0;
	while (ft_is_whitespace(str[index]) == 0)
	{
		count++;
		index++;
	}
	return (count);
}

int		ft_count_words(char *str)
{
	int i;
	int count;
	int found;

	i = 0;
	count = 0;
	found = 0;
	while (str[i] != '\0')
	{
		while (ft_is_whitespace(str[i]))
		{
			found = 0;
			i++;
		}
		if (ft_is_whitespace(str[i]) == 0 && str[i] != '\0' && found == 0)
		{
			found = 1;
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**out;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (!(out = (char **)malloc(sizeof(char*) * (ft_count_words(str) + 1))))
		return (NULL);
	while (str[i] != '\0')
	{
		while (ft_is_whitespace(str[i]) && str[i] != '\0')
			i++;
		if (str[i] != '\0')
		{
			k = 0;
			if (!(out[j] = malloc(sizeof(char) * ft_count_chars(str, i) + 1)))
				return (NULL);
			while (ft_is_whitespace(str[i]) == 0 && str[i] != '\0')
				out[j][k++] = str[i++];
			out[j++][k] = '\0';
		}
	}
	out[j] = NULL;
	return (out);
}
