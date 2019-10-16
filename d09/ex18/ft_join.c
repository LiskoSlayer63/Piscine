/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 10:46:05 by mahola            #+#    #+#             */
/*   Updated: 2019/08/23 11:25:23 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src, int n)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[n + i] = src[i];
		i++;
	}
	dest[n + i] = '\0';
	return (dest);
}

char	*ft_join(char **tab, char *sep)
{
	int		i;
	int		l;
	char	*str;

	i = 0;
	l = 0;
	while (tab[i] != '\0')
		l += ft_strlen(tab[i++]) + ft_strlen(sep);
	if (!(str = (char *)malloc(sizeof(char) * (l - ft_strlen(sep)))))
		return ("");
	i = 0;
	l = 0;
	while (tab[i] != '\0')
	{
		str = ft_strcat(str, tab[i], l);
		l += ft_strlen(tab[i]);
		if (tab[i + 1] != '\0')
			str = ft_strcat(str, sep, l);
		l += ft_strlen(sep);
		i++;
	}
	return (str);
}
