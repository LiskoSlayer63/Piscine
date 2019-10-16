/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 21:36:53 by mahola            #+#    #+#             */
/*   Updated: 2019/08/29 21:54:53 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	if (!(*root))
		(*root) = btree_create_node(item);
	else
	{
		if (cmpf((*root)->item, item) < 0)
			btree_insert_data(&(*root)->right, item, cmpf);
		else
			btree_insert_data(&(*root)->left, item, cmpf);
	}
}

int		main(void)
{
	return (0);
}
