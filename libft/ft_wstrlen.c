/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 21:38:08 by nbettach          #+#    #+#             */
/*   Updated: 2018/09/01 21:38:08 by nbettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_wstrlen(wchar_t *str)
{
	size_t	len;
	int		i;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '\0')
			len += ft_wcharlen(str[i]);
		i++;
	}
	return (len);
}
