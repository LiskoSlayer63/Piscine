/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 19:04:18 by mahola            #+#    #+#             */
/*   Updated: 2019/08/27 19:12:36 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*out;
	unsigned int	i;

	i = 0;
	out = begin_list;
	while (i < nbr)
	{
		if (!out)
			return (NULL);
		out = out->next;
		i++;
	}
	return (out);
}
