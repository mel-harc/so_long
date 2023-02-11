/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:09:03 by mel-harc          #+#    #+#             */
/*   Updated: 2023/02/11 20:47:32 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_get_xy(char	**nmap, t_info *s)
{
	int	i;
	int	j;

	i = 0;
	while (nmap[i])
	{
		j = 0;
		while (nmap[i][j])
		{
			if (nmap[i][j] == 'P')
			{
				s->px = i;
				s->py = j;
				break ;
			}
			else
				j++;
		}
		i++;
	}
}

void	ft_flood_fill(char	**nmap, int x, int y)
{
	if (nmap[x][y] == '1' || nmap[x][y] == 'E' || nmap[x][y] == 'X' \
	|| nmap[x][y] == 'N')
		return ;
	if (nmap[x][y] != 'P')
		nmap[x][y] = 'X';
	ft_flood_fill(nmap, x, y + 1);
	ft_flood_fill(nmap, x, y - 1);
	ft_flood_fill(nmap, x - 1, y);
	ft_flood_fill(nmap, x + 1, y);
}

int	ft_check_path(t_info *v)
{
	char	**nmap;
	int		i;

	v->px = 0;
	v->py = 0;
	i = -1;
	nmap = ft_split(v->map_1d, '\n');
	ft_get_xy(nmap, v);
	ft_flood_fill(nmap, v->px, v->py);
	if (ft_tracing(nmap) == 1)
		return (1);
	while (nmap[++i])
		free(nmap[i]);
	free(nmap);
	return (0);
}

int	ft_tracing(char **nmap)
{
	int	i;
	int	j;

	i = -1;
	while (nmap[++i])
	{
		j = 0;
		while (nmap[i][j])
		{
			if (nmap[i][j] == 'C')
			{
				ft_error(7);
				return (1);
			}
			if (nmap[i][j] == 'E' && nmap[i - 1][j] != 'X' \
				&& nmap[i + 1][j] != 'X' && nmap[i][j - 1] != 'X' \
				&& nmap[i][j + 1] != 'X')
			{
				ft_error(7);
				return (1);
			}
			j++;
		}
	}
	return (0);
}
