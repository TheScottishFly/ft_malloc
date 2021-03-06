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

wchar_t		*ft_wstrjoin(wchar_t *s1, wchar_t *s2, int k)
{
	int		i;
	int		j;
	wchar_t	*str;

	i = ft_wstrlen(s1);
	i += ft_wstrlen(s2);
	j = 0;
	str = (wchar_t *)malloc(sizeof(wchar_t) * (i + 1));
	i = 0;
	if (!str)
		return (NULL);
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = '\0';
	if ((k == 1 || k == 3) && s1)
		free(s1);
	if ((k == 2 || k == 3) && s2)
		free(s2);
	return (str);
}
