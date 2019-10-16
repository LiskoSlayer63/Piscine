/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 22:57:15 by mahola            #+#    #+#             */
/*   Updated: 2019/08/21 23:35:15 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putstr(char *str);

int		ft_count_words(char *str)
{
	int i;
	int count;

	while (str[i] != '\0')
	{
		if (ft_is_whitespace(str[i]) && ft_is_whitespace(str[i - 1]))
		{
			i++;
			continue ;
		}


int		ft_count_chars(char *str)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (ft_is_whitespace(str[i]) == 0)
			count++;
		i++;
	}
	return (count);
}

int		ft_is_whitespace(char c)
{
	if (c == '\t' || c == ' ' || c == '\n')
		return (1);
	return (0);
}

char	**ft_split_whitespaces(char *str)
{:x

	int i;
	char **out;

	i = 0;
	if (!(out = (char **)malloc(sizeof(char) * ft_count_size(str))))
		return (NULL);
	while (str[i] != '\0')
	{
		if (
		i++;
	}
