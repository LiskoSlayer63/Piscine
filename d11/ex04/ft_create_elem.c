/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 15:22:06 by mahola            #+#    #+#             */
/*   Updated: 2019/08/27 18:21:38 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *tmp;

	if (!(tmp = (t_list*)malloc(sizeof(t_list*))))
		return (NULL);
	tmp->data = data;
	tmp->next = NULL;
	return (tmp);
}
