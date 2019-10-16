/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 17:56:53 by mahola            #+#    #+#             */
/*   Updated: 2019/08/30 18:01:11 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		btree_level_count(t_btree *root)
{
	int		leftc;
	int		rightc;
	t_btree	left;
	t_btree	right;

	leftc = 0;
	rightc = 0;
	left = root;
	right = root;
	while (left)
	{
		leftc++;
		left = left->left;
	}
	while (right)
	{
		rightc++;
		right = right->right;
	}
	if (leftc > rightc)
		return (leftc);
	return (rightc);
}
