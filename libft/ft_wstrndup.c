/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrndup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 21:38:31 by nbettach          #+#    #+#             */
/*   Updated: 2018/09/01 21:38:31 by nbettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t		*ft_wstrndup(wchar_t *str, size_t j, size_t n)
{
	wchar_t		*ret;
	size_t		i;

	i = 0;
	if (!(ret = ft_wstrnew(n + 1)))
		return (NULL);
	while (str[j] != '\0' && (n >= (size_t)ft_wcharlen(str[j])))
	{
		ret[i] = str[j];
		n -= (size_t)ft_wcharlen(str[j]);
		i++;
		j++;
	}
	ret[i] = '\0';
	free(str);
	return (ret);
}
