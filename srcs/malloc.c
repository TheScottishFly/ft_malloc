/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   file.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/08 10:04:51 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/08 10:47:48 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
