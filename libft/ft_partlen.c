/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_partlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 21:38:28 by nbettach          #+#    #+#             */
/*   Updated: 2018/09/01 21:38:28 by nbettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_partlen(char *str, int i, char *comp)
{
	int	j;
	int	f;
	int	ret;

	ret = 0;
	f = 1;
	while (f)
	{
		j = 0;
		f = 0;
		while (comp[j] != '\0')
		{
			if (str[i] == comp[j])
			{
				f = 1;
				ret++;
			}
			j++;
		}
		i++;
	}
	return (ret);
}
