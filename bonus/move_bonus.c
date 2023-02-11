/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:11:33 by mel-harc          #+#    #+#             */
/*   Updated: 2023/02/11 18:33:06 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_mouve_lr(int key, t_info *s)
{
	if (key == 123 && s->map_2d[s->pxp][s->pyp - 1] == 'N')
		ft_exit(s);
	if (key == 123 && s->map_2d[s->pxp][s->pyp - 1] == 'E' && s->coin == 0)
		ft_exit(s);
	if (key == 123 && s->map_2d[s->pxp][s->pyp - 1] != '1'\
	&& s->map_2d[s->pxp][s->pyp - 1] != 'E')
	{
		s->map_2d[s->pxp][s->pyp] = '0';
		s->map_2d[s->pxp][s->pyp - 1] = 'P';
		s->mv++;
		ft_draw(s);
	}
	if (key == 124 && s->map_2d[s->pxp][s->pyp + 1] == 'N')
		ft_exit(s);
	if (key == 124 && s->map_2d[s->pxp][s->pyp + 1] == 'E' && s->coin == 0)
		ft_exit(0);
	if (key == 124 && s->map_2d[s->pxp][s->pyp + 1] != '1'\
		&& s->map_2d[s->pxp][s->pyp + 1] != 'E')
	{
		s->map_2d[s->pxp][s->pyp] = '0';
		s->map_2d[s->pxp][s->pyp + 1] = 'P';
		s->mv++;
		ft_draw(s);
	}
}

void	ft_mouve_up_down(int key, t_info *s)
{
	if (key == 126 && s->map_2d[s->pxp - 1][s->pyp] == 'N')
		ft_exit(s);
	if (key == 126 && s->map_2d[s->pxp - 1][s->pyp] == 'E' && s->coin == 0)
		ft_exit(s);
	if (key == 126 && s->map_2d[s->pxp - 1][s->pyp] != '1'\
	&& s->map_2d[s->pxp - 1][s->pyp] != 'E')
	{
		s->map_2d[s->pxp][s->pyp] = '0';
		s->map_2d[s->pxp - 1][s->pyp] = 'P';
		s->mv++;
		ft_draw(s);
	}
	if (key == 125 && s->map_2d[s->pxp + 1][s->pyp] == 'N')
		ft_exit(s);
	if (key == 125 && s->map_2d[s->pxp + 1][s->pyp] == 'E' && s->coin == 0)
		ft_exit(s);
	if (key == 125 && s->map_2d[s->pxp + 1][s->pyp] != '1'\
		&& s->map_2d[s->pxp + 1][s->pyp] != 'E')
	{
		s->map_2d[s->pxp][s->pyp] = '0';
		s->map_2d[s->pxp + 1][s->pyp] = 'P';
		s->mv++;
		ft_draw(s);
	}
}

int	ft_exit(t_info *s)
{
	mlx_destroy_window(s->mlx_ptr, s->mlx_win);
	exit(0);
	return (0);
}

int	mouve(int key, t_info *s)
{
	ft_position(s);
	if (key == 53)
		ft_exit(s);
	else if (key == 123 || key == 124)
		ft_mouve_lr(key, s);
	else if (key == 125 || key == 126)
		ft_mouve_up_down(key, s);
	mlx_string_put(s->mlx_ptr, s->mlx_win, 70, 10, 0x0000FF00, "MOVES EGAUL :");
	mlx_string_put(s->mlx_ptr, s->mlx_win, 250, 10, 0x0000FF00, ft_itoa(s->mv));
	return (0);
}

void	ft_position(t_info *s)
{
	int	i;
	int	j;

	i = 0;
	s->coin = 0;
	while (s->map_2d[i])
	{
		j = 0;
		while (s->map_2d[i][j])
		{
			if (s->map_2d[i][j] == 'P')
			{
				s->pxp = i;
				s->pyp = j;
			}
			else if (s->map_2d[i][j] == 'C')
				s->coin++;
			j++;
		}
		i++;
	}
}
