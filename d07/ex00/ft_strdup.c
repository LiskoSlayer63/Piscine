/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 15:55:11 by mahola            #+#    #+#             */
/*   Updated: 2019/08/21 16:31:30 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*out;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (!(out = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		out[i] = src[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
