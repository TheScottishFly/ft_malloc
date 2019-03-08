/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcharlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 21:38:35 by nbettach          #+#    #+#             */
/*   Updated: 2018/09/01 21:38:35 by nbettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wcharlen(wchar_t c)
{
	int i;

	i = 0;
	if ((intmax_t)c < 0x80)
		i += 1;
	else if ((intmax_t)c < 0x800)
		i += 2;
	else if ((intmax_t)c < 0x10000)
		i += 3;
	else
		i += 4;
	return (i);
}