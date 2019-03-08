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
