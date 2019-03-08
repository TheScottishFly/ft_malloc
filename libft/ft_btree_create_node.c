/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_create_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 21:37:52 by nbettach          #+#    #+#             */
/*   Updated: 2018/09/01 21:37:52 by nbettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_btree	*ft_btree_create_node(void *item)
{
	t_btree *tree;

	tree = malloc(sizeof(t_btree));
	if (tree)
	{
		tree->left = NULL;
		tree->right = NULL;
		tree->item = item;
	}
	return (tree);
}
