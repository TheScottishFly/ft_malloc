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
