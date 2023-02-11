/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_window_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:37:14 by mel-harc          #+#    #+#             */
/*   Updated: 2023/02/11 16:51:18 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	open_window(int x, int y, t_info *s)
{
	int	a;
	int	b;

	a = 50;
	b = 50;
	s->a = &a;
	s->b = &b;
	s->pxp = 0;
	s->pyp = 0;
	s->mv = 0;
	s->str_c = "img/dunut.xpm";
	s->str_e = "img/exit1.xpm";
	s->str_p = "img/player.xpm";
	s->str_r = "img/paground.xpm";
	s->str_w = "img/wall_.xpm";
	s->str_n = "img/enemy.xpm";
	s->mlx_ptr = mlx_init();
	s->mlx_win = mlx_new_window(s->mlx_ptr, x, y, "so_long");
	ft_draw(s);
	mlx_hook(s->mlx_win, 17, 0, ft_exit, s);
	mlx_hook(s->mlx_win, 2, 0, mouve, s);
	mlx_loop(s->mlx_ptr);
	free(s->mlx_ptr);
	return ;
}
