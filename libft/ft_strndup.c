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
