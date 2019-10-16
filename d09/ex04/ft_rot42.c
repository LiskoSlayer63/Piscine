/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 20:42:55 by mahola            #+#    #+#             */
/*   Updated: 2019/08/22 21:24:59 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	rotate_char(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		if (c + 16 > 'z')
			return (c - 10);
		else
			return (c + 16);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		if (c + 16 > 'Z')
			return (c - 10);
		else
			return (c + 16);
	}
	return (c);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = rotate_char(str[i]);
		i++;
	}
	return (str);
}
