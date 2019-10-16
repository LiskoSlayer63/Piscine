/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 18:28:46 by mahola            #+#    #+#             */
/*   Updated: 2019/08/27 18:50:41 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*out;
	t_list	*tmp;
	int		i;

	i = 0;
	out = NULL;
	while (i < ac)
	{
		tmp = out;
		out = ft_create_elem(av[i]);
		out->next = tmp;
		i++;
	}
	return (out);
}
