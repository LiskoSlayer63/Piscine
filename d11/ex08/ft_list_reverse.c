/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 19:24:38 by mahola            #+#    #+#             */
/*   Updated: 2019/08/27 19:54:42 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *out;
	t_list *list;
	t_list *tmp;

	list = *begin_list;
	out = NULL;
	while (list)
	{
		tmp = list->next;
		list->next = out;
		out = list;
		list = tmp;
	}
	*begin_list = out;
}
