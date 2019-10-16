/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 21:36:14 by mahola            #+#    #+#             */
/*   Updated: 2019/08/21 22:52:29 by mahola           ###   ########.fr       */
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

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		l;
	char	*str;

	i = 0;
	l = 0;
	while (++i < argc && argv[i] != '\0')
		l += ft_strlen(argv[i]) + 1;
	if (!(str = (char *)malloc(sizeof(char) * (l - 1))))
		return ("");
	i = 1;
	l = 0;
	while (i < argc && argv[i] != '\0')
	{
		str = ft_strcat(str, argv[i], l);
		l += ft_strlen(argv[i]);
		if (argv[i + 1] != '\0')
			str = ft_strcat(str, "\n", l++);
		i++;
	}
	return (str);
}
