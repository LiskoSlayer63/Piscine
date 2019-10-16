/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 20:09:46 by mahola            #+#    #+#             */
/*   Updated: 2019/08/29 20:21:27 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*out;

	if (!(out = (t_btree*)malloc(sizeof(t_btree*))))
		return (NULL);
	out->item = item;
	out->left = NULL;
	out->right = NULL;
	return (out);
}
