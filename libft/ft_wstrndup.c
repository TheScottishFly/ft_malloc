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
