/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 21:38:09 by nbettach          #+#    #+#             */
/*   Updated: 2018/09/01 21:38:09 by nbettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_lstdelone(t_ptf **s)
{
	if (s && *s)
	{
		if ((*s)->arg)
			ft_strdel(&(*s)->arg);
		if ((*s)->warg)
			free((*s)->warg);
		if ((*s)->option)
			ft_strdel(&(*s)->option);
	}
}
