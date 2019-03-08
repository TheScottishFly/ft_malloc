/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 21:37:53 by nbettach          #+#    #+#             */
/*   Updated: 2018/09/18 01:43:25 by nbettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*strcdst;
	const char	*strsrc;
	int			i;

	i = 0;
	strsrc = src;
	strcdst = dst;
	while (n--)
	{
		strcdst[i] = strsrc[i];
		i++;
	}
	return (dst);
}
