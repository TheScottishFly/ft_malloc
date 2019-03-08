/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 21:38:02 by nbettach          #+#    #+#             */
/*   Updated: 2018/09/01 21:38:02 by nbettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *strdst;
	unsigned char *strsrc;

	strdst = (unsigned char*)dst;
	strsrc = (unsigned char*)src;
	while (n--)
	{
		if (*strsrc == (unsigned char)c)
		{
			*strdst++ = *strsrc++;
			return (strdst);
		}
		*strdst++ = *strsrc++;
	}
	return (NULL);
}
