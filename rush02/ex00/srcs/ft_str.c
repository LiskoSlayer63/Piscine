/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 19:16:52 by mahola            #+#    #+#             */
/*   Updated: 2019/09/01 19:55:25 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_append_str(char **str, char c)
{
	char	*out;
	int		i;

	if (!(out = (char*)malloc(sizeof(char) * ft_strlen(*str) + 2)))
		return ;
	i = 0;
	while ((*str)[i])
	{
		out[i] = (*str)[i];
		i++;
	}
	out[i] = c;
	out[i + 1] = '\0';
	*str = out;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
