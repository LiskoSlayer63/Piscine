/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 17:48:20 by mahola            #+#    #+#             */
/*   Updated: 2019/08/30 17:54:29 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	t_btree *out;

	out = 0;
	if (root)
	{
		out = btree_search_item(root->left, data_ref, cmpf);
		if (!out && !cmpf(root->item, data_ref))
			out = root->item;
		if (!out)
			out = btree_search_item(root->right, data_ref, cmpf);
	}
	return (out);
}
