/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 03:09:14 by mel-harc          #+#    #+#             */
/*   Updated: 2023/02/09 04:17:56 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_img(char b, t_info *s)
{
	if (b == '1')
	{
		s->wall = mlx_xpm_file_to_image(s->mlx_ptr, s->str_w, s->a, s->b);
		mlx_put_image_to_window(s->mlx_ptr, s->mlx_win, s->wall, s->x, s->y);
	}
	if (b == '0')
	{
		s->img_r = mlx_xpm_file_to_image(s->mlx_ptr, s->str_r, s->a, s->b);
		mlx_put_image_to_window(s->mlx_ptr, s->mlx_win, s->img_r, s->x, s->y);
	}
	if (b == 'P')
	{
		s->img_p = mlx_xpm_file_to_image(s->mlx_ptr, s->str_p, s->a, s->b);
		mlx_put_image_to_window(s->mlx_ptr, s->mlx_win, s->img_p, s->x, s->y);
	}
	if (b == 'E')
	{
		s->img_e = mlx_xpm_file_to_image(s->mlx_ptr, s->str_e, s->a, s->b);
		mlx_put_image_to_window(s->mlx_ptr, s->mlx_win, s->img_e, s->x, s->y);
	}
	if (b == 'C')
	{
		s->img_c = mlx_xpm_file_to_image(s->mlx_ptr, s->str_c, s->a, s->b);
		mlx_put_image_to_window(s->mlx_ptr, s->mlx_win, s->img_c, s->x, s->y);
	}
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
