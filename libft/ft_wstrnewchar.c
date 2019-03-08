/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrnewchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 21:38:22 by nbettach          #+#    #+#             */
/*   Updated: 2018/09/01 21:38:22 by nbettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t		*ft_wstrnewchar(int size, wchar_t c)
{
	wchar_t		*str;
	int			i;

	i = 0;
	if (!(str = (wchar_t *)malloc(sizeof(wchar_t) * (size + 1))))
		return (NULL);
	while (size--)
		str[i++] = c;
	str[i] = '\0';
	return (str);
}
