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

void	lets_join(char *s1, char *s2, char *new2)
{
	while (*s1 != '\0')
		*new2++ = *s1++;
	while (*s2 != '\0')
		*new2++ = *s2++;
	*new2 = '\0';
}

char	*ft_strjoin(char *s1, char *s2, int i)
{
	char	*new;
	char	*new2;
	char	*s1_pointer;
	char	*s2_pointer;

	s1_pointer = s1;
	s2_pointer = s2;
	if (s1 == NULL && s2 == NULL)
		return (ft_strnew(0));
	else if (s1 == NULL)
		return (ft_strdup(s2));
	else if (s2 == NULL)
		return (ft_strdup(s1));
	new = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (new == NULL)
		return (NULL);
	new2 = new;
	lets_join(s1, s2, new2);
	if ((i == 1 || i == 3) && s1)
		ft_strdel(&s1_pointer);
	if ((i == 2 || i == 3) && s2)
		ft_strdel(&s2_pointer);
	return (new);
}
