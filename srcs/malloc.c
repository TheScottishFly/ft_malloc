/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 21:42:31 by nbettach          #+#    #+#             */
/*   Updated: 2018/09/18 23:06:15 by nbettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_malloc.h"

void		fill_block(t_block *b, size_t size)
{
	b->size = size;
	b->free = 0;
	b->data = b + 1;
	b->next = NULL;
}

t_block		*get_last_block(t_block **map)
{
	t_block *buf;
	int		i;

	buf = *map;
	i = 0;
	while (buf->next != NULL && buf->free == 0)
	{
		buf = buf->next;
		i++;
	}
	if (i == 1024)
		return (NULL);
	//printf("list = %d\n", i);
	return (buf);
}

void		*malloc(size_t size)
{
	void	*ptr;

	if (size <= 0)
		return (NULL);
	if (size <= TINY_SIZE)
		if ((ptr = tiny_malloc(size)))
			return (ptr);
	if (size <= SMALL_SIZE)
	{
		if ((ptr = small_malloc(size)))
			return (ptr);
	}
	else
		ptr = large_malloc(size + sizeof(t_block));
	return (ptr);
}
