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

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *mem;

	mem = malloc(size);
	if (mem == NULL)
		return (NULL);
	else
		return (ft_memset(mem, 0, size));
}
