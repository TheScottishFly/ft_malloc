/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 21:42:04 by nbettach          #+#    #+#             */
/*   Updated: 2018/09/18 21:39:53 by nbettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_malloc.h"

t_block		*alloc_map(size_t size)
{
	return ((t_block*)mmap(0, size + 1,
				PROT_READ | PROT_WRITE, MAP_ANON | MAP_PRIVATE, -1, 0));
}

void		*tiny_malloc(size_t size)
{
	t_block		*b;
	t_block		*last;

	b = NULL;
	if (!g_maps.tiny)
	{
		if (!(g_maps.tiny = alloc_map(TINY_MAP)))
			return (NULL);
		b = g_maps.tiny;
	}
	else
	{
		if (!(last = get_last_block(&g_maps.tiny)))
            return (NULL);
        b = (void*)last->data + TINY_SIZE;
		last->next = b;
	}
    fill_block(b, size);
	return (b->data);
}

void		*small_malloc(size_t size)
{
	t_block		*b;
	t_block		*last;

	b = NULL;
	if (!g_maps.small)
	{
		if (!(g_maps.small = alloc_map(SMALL_MAP)))
			return (NULL);
		b = g_maps.small;
	}
	else
	{
		if (!(last = get_last_block(&g_maps.small)))
            return (NULL);
		b = (void*)last->data + SMALL_SIZE;
		last->next = b;
	}
	fill_block(b, size);
	return (b->data);
}

void		*large_malloc(size_t size)
{
	t_block		*b;

	if (!g_maps.large)
	{
		if (!(g_maps.large = alloc_map(size + sizeof(t_block))))
			return (NULL);
		b = g_maps.large;
	}
	else
	{
		b = g_maps.large;
		while (b->next != NULL)
			b = b->next;
		b->next = alloc_map(size + sizeof(t_block));
		b = b->next;
	}
	fill_block(b, size);
	return (b->data);
}
