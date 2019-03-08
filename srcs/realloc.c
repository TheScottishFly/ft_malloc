/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 21:42:46 by nbettach          #+#    #+#             */
/*   Updated: 2018/09/18 01:39:28 by nbettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_malloc.h"

void		*realloc(void *ptr, size_t size)
{
	t_block	*bl;
	t_block	*new_bl;

	bl = NULL;
	new_bl = NULL;
	if (ptr != NULL && size > 0)
	{
		bl = find_block(ptr);
		new_bl = malloc(size);
		if (!bl)
			return (NULL);
		ft_memcpy(new_bl, ptr, bl->size);
		free(ptr);
		return (new_bl);
	}
	else if (size > 0)
		return (malloc(size));
	return (NULL);
}
