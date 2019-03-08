/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_organize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 21:38:36 by nbettach          #+#    #+#             */
/*   Updated: 2018/09/01 21:38:36 by nbettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_organise(t_ptf *s)
{
	ft_saveoption(s);
	ft_savewide(s);
	ft_saveprec(s);
	ft_savesize(s);
	ft_saveconv(s);
	ft_handle(s);
	ft_display(s);
}

void		ft_init(t_ptf *s)
{
	ft_lstdelone(&s);
	s->arg = NULL;
	s->warg = NULL;
	s->option = NULL;
	s->error = 0;
	s->wide = 0;
	s->prec = 0;
	s->size = 0;
	s->conv = 0;
	s->c_zero = 0;
	s->arg_null = 0;
}

void		ft_init_one(t_ptf *s)
{
	s->arg = NULL;
	s->warg = NULL;
	s->option = NULL;
	s->error = 0;
	s->wide = 0;
	s->prec = 0;
	s->size = 0;
	s->conv = 0;
	s->c_zero = 0;
	s->arg_null = 0;
}
