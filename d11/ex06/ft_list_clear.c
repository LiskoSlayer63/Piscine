/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 18:55:21 by mahola            #+#    #+#             */
/*   Updated: 2019/08/27 19:01:34 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;
	t_list *out;

	out = *begin_list;
	while (out)
	{
		tmp = out->next;
		free(out);
		out = tmp;
	}
	*begin_list = NULL;
}
