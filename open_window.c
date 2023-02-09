/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 01:21:46 by mel-harc          #+#    #+#             */
/*   Updated: 2023/02/09 03:08:52 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	open_window(int x, int y, t_info *s)
{
	int		a;
	int		b;
	int		pxp;
	int		pyp;

	a = 50;
	b = 50;
	s->a = &a;
	s->b = &b;
	s->pxp = 0;
	s->pyp = 0;
	s->str_c = "img/dunut.xpm";
	s->str_e = "img/exit.xpm";
	s->str_p = "img/player.xpm";
	s->str_r = "img/paground.xpm";
	s->str_w = "img/wall_.xpm";
	s->mlx_ptr = mlx_init();
	s->mlx_win = mlx_new_window(s->mlx_ptr, x, y, "so_long");
	ft_draw(s);
	mlx_hook(s->mlx_win, 17, 1L, ft_exit, s);
	mlx_hook(s->mlx_win, 2, 1L, mouve, s);
	mlx_loop(s->mlx_ptr);
	return ;
}
