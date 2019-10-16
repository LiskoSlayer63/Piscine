/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 17:52:24 by mahola            #+#    #+#             */
/*   Updated: 2019/08/27 18:02:14 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*tmp;
	int		count;

	count = 0;
	tmp = begin_list;
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
