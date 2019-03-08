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

void		write_mapname(char *map_name, t_block *bl)
{
	ft_putstr(map_name);
	ft_putstr(" : ");
	ft_putnbrbase((uintmax_t)bl, "0123456789abcdef", 16);
	ft_putchar('\n');
}

void		write_details(t_block *bl)
{
	ft_putstr("0x");
	ft_putnbrbase((uintmax_t)bl->data, "0123456789abcdef", 16);
	ft_putstr(" - 0x");
	ft_putnbrbase((uintmax_t)(bl->data + (long)bl->size),
			"0123456789abcdef", 16);
	ft_putstr(" : ");
	ft_putnbr(bl->size);
	ft_putstr(" octets\n");
}

void		write_total(long total)
{
	ft_putstr("Total : ");
	ft_putnbr(total);
	ft_putstr(" octets\n");
}

static long	print_map_list(t_block **map, char *map_name)
{
	long	total;
	t_block *bl;

	total = 0;
	bl = *map;
	write_mapname(map_name, bl);
	while (bl != NULL)
	{
		if (bl->free == 0)
		{
			write_details(bl);
			total += bl->size;
		}
		bl = bl->next;
	}
	return (total);
}

void		show_alloc_mem(void)
{
	long total;

	total = print_map_list(&g_maps.tiny, "TINY");
	total += print_map_list(&g_maps.small, "SMALL");
	total += print_map_list(&g_maps.large, "LARGE");
	write_total(total);
}
