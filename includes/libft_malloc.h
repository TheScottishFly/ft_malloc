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

#ifndef LIBFT_MALLOC_H
# define LIBFT_MALLOC_H

# include <sys/mman.h>
# include <unistd.h>
# include "../libft/ft_printf.h"

# define TINY_SIZE  (size_t)getpagesize() - 32
# define SMALL_SIZE (size_t)getpagesize() * 4 - 32
# define TINY_MAP  (size_t)getpagesize() * 1024
# define SMALL_MAP (size_t)(getpagesize() * 4) * 1024

typedef struct		s_block
{
	size_t			size;
	int				free;
	struct s_block	*next;
	void			*data;
}					t_block;

typedef struct		s_maps
{
	struct s_block	*tiny;
	struct s_block	*small;
	struct s_block	*large;
}					t_maps;

t_maps				g_maps;

void				free(void *ptr);
void				*malloc(size_t size);
void				*tiny_malloc(size_t size);
void				*small_malloc(size_t size);
void				*large_malloc(size_t size);
t_block				*alloc_map(size_t size);
void				*realloc(void *ptr, size_t size);
void				fill_block(t_block *b, size_t size);
t_block				*get_last_block(t_block **map);
t_block				*find_block(void *ptr);
void				show_alloc_mem();

#endif
