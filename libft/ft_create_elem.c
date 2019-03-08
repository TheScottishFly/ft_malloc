/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 21:38:38 by nbettach          #+#    #+#             */
/*   Updated: 2018/09/01 21:38:38 by nbettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list2	*ft_create_elem(void *data)
{
	t_list2 *list;

	list = (t_list2*)malloc(sizeof(t_list2));
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}
