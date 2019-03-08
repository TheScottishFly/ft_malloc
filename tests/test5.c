/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 22:41:53 by nbettach          #+#    #+#             */
/*   Updated: 2018/09/18 02:08:18 by nbettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_malloc.h"
#include <stdlib.h>

int		main(void)
{
	void	*ptr;

	ptr = malloc(1024);
	ptr = malloc(1024 * 32);
	ptr = malloc(1024 * 1024);
	ptr = malloc(1024 * 1024 * 16);
	ptr = malloc(1024 * 1024 * 128);
	show_alloc_mem();
	return (0);
}
