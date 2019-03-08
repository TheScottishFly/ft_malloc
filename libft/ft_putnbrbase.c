/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 21:38:26 by nbettach          #+#    #+#             */
/*   Updated: 2018/09/01 21:38:26 by nbettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbrbase(uintmax_t nbr, char *base, size_t baselen)
{
	if (nbr >= baselen)
	{
		ft_putnbrbase(nbr / baselen, base, baselen);
		ft_putnbrbase(nbr % baselen, base, baselen);
	}
	else
		ft_putchar(base[nbr]);
}
