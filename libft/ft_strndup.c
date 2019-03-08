/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 21:38:11 by nbettach          #+#    #+#             */
/*   Updated: 2018/09/01 21:38:11 by nbettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char *str, size_t j, size_t n)
{
	char	*ret;
	size_t	i;

	i = 0;
	if (!(ret = ft_strnew(n + 1)))
		return (NULL);
	ret[n] = '\0';
	while (n)
	{
		ret[i++] = str[j++];
		n--;
	}
	free(str);
	return (ret);
}
