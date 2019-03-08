/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   file.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/08 10:04:51 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/08 10:47:48 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static long		ft_digitnb(intmax_t n)
{
	uintmax_t	size;

	if (n == 0)
		return (1);
	size = 0;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size++);
}

static int		ft_sign(intmax_t n)
{
	if (n < 0)
		return (1);
	return (0);
}

char			*ft_itoa(intmax_t n)
{
	int		sign;
	long	length;
	char	*res;

	sign = ft_sign(n);
	length = ft_digitnb(n) + sign;
	if (!(res = (char *)malloc((length + 1) * sizeof(char))))
		return (NULL);
	res[length] = '\0';
	length--;
	while (length >= 0)
	{
		if (sign && length == 0)
		{
			res[length] = '-';
			break ;
		}
		if (sign)
			res[length] = (n % 10) * -1 + '0';
		else
			res[length] = (n % 10) + '0';
		length--;
		n /= 10;
	}
	return (res);
}
