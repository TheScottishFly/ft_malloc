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
