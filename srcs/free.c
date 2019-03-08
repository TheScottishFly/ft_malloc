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

t_block			*find_block(void *ptr)
{
	t_block		*bl;

	if ((bl = g_maps.tiny))
		while (bl != NULL)
		{
			if (bl->free == 0 && bl->data == ptr)
				return (bl);
			bl = bl->next;
		}
	if ((bl = g_maps.small))
		while (bl != NULL)
		{
			if (bl->free == 0 && bl->data == ptr)
				return (bl);
			bl = bl->next;
		}
	if ((bl = g_maps.large))
		while (bl != NULL)
		{
			if (bl->free == 0 && bl->data == ptr)
				return (bl);
			bl = bl->next;
		}
	return (NULL);
}

static void		free_others(t_block *ptr)
{
	ft_bzero(ptr->data, ptr->size);
	ptr->size = 0;
	ptr->free = 1;
}

static void		free_large(t_block *ptr)
{
	t_block	*list;

	list = g_maps.large;
	if (list == ptr)
	{
		g_maps.large = list->next;
		munmap(ptr, ptr->size + sizeof(t_block));
		return ;
	}
	while (list != NULL)
	{
		if (list->next == ptr)
		{
			list->next = ptr->next;
			munmap(ptr, ptr->size + sizeof(t_block));
			return ;
		}
		list = list->next;
	}
}

void			free(void *ptr)
{
	t_block	*bl;

	bl = NULL;
	if (ptr != NULL && (bl = find_block(ptr)))
	{
		if (bl->size <= TINY_SIZE || bl->size <= SMALL_SIZE)
			free_others(bl);
		else
			free_large(bl);
	}
}
