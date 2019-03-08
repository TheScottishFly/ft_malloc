/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 21:38:20 by nbettach          #+#    #+#             */
/*   Updated: 2018/09/01 21:38:20 by nbettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*ret;

	i = 0;
	if (s == 0)
		return (NULL);
	if (!(ret = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (len--)
		ret[i++] = s[start++];
	ret[i] = '\0';
	return (ret);
}
