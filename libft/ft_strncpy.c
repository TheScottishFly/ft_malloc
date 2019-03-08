/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 21:37:55 by nbettach          #+#    #+#             */
/*   Updated: 2018/09/01 21:37:55 by nbettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *strdst;

	strdst = dst;
	while (*src != '\0' && len > 0)
	{
		*strdst++ = *src++;
		len--;
	}
	while (len > 0)
	{
		*strdst++ = '\0';
		len--;
	}
	return (dst);
}
