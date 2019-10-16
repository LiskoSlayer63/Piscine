/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 12:45:17 by mahola            #+#    #+#             */
/*   Updated: 2019/08/16 20:48:28 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		count;
	int		i;
	char	tmp;

	count = 0;
	i = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	while (i < count / 2)
	{
		tmp = str[i];
		str[i] = str[count - i - 1];
		str[count - i - 1] = tmp;
		i++;
	}
	return (str);
}
