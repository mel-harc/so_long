/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:08:47 by mel-harc          #+#    #+#             */
/*   Updated: 2023/02/11 16:50:26 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_img2(char b, t_info *s)
{
	if (b == 'E')
	{
		s->img_e = mlx_xpm_file_to_image(s->mlx_ptr, s->str_e, s->a, s->b);
		if (!s->img_e)
			ft_error(9);
		mlx_put_image_to_window(s->mlx_ptr, s->mlx_win, s->img_e, s->x, s->y);
	}
	if (b == 'C')
	{
		s->img_c = mlx_xpm_file_to_image(s->mlx_ptr, s->str_c, s->a, s->b);
		if (!s->img_c)
			ft_error(9);
		mlx_put_image_to_window(s->mlx_ptr, s->mlx_win, s->img_c, s->x, s->y);
	}
	if (b == 'N')
	{
		s->img_n = mlx_xpm_file_to_image(s->mlx_ptr, s->str_n, s->a, s->b);
		if (!s->img_n)
			ft_error(9);
		mlx_put_image_to_window(s->mlx_ptr, s->mlx_win, s->img_n, s->x, s->y);
	}
}

void	ft_img(char b, t_info *s)
{
	if (b == '1')
	{
		s->wall = mlx_xpm_file_to_image(s->mlx_ptr, s->str_w, s->a, s->b);
		if (!s->wall)
			ft_error(9);
		mlx_put_image_to_window(s->mlx_ptr, s->mlx_win, s->wall, s->x, s->y);
	}
	if (b == '0')
	{
		s->img_r = mlx_xpm_file_to_image(s->mlx_ptr, s->str_r, s->a, s->b);
		if (!s->img_r)
			ft_error(9);
		mlx_put_image_to_window(s->mlx_ptr, s->mlx_win, s->img_r, s->x, s->y);
	}
	if (b == 'P')
	{
		s->img_p = mlx_xpm_file_to_image(s->mlx_ptr, s->str_p, s->a, s->b);
		if (!s->img_p)
			ft_error(9);
		mlx_put_image_to_window(s->mlx_ptr, s->mlx_win, s->img_p, s->x, s->y);
	}
	if (b == 'E' || b == 'C' || b == 'N')
		ft_img2(b, s);
}

void	ft_draw(t_info *s)
{
	int		i;
	size_t	j;
	size_t	len;

	i = -1;
	len = ft_strlen(s->map_2d[0]) - 1;
	s->x = 0;
	s->y = 0;
	while (s->map_2d[++i])
	{
		j = 0;
		while (s->map_2d[i][j])
		{
			ft_img(s->map_2d[i][j], s);
			if (j == len)
			{
				s->x = 0;
				s->y = s->y + 50;
			}
			else
				s->x = s->x + 50;
			j++;
		}
	}
	return ;
}
