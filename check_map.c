/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:54:50 by mel-harc          #+#    #+#             */
/*   Updated: 2023/02/08 18:10:56 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_check_map1(char **map_2d, char *map_1d, size_t k)
{
	int		a;

	a = 0;
	while (map_1d[a])
	{
		if (map_1d[a] == 'P' || map_1d[a] == '1' || map_1d[a] == '0' \
			|| map_1d[a] == 'E' || map_1d[a] == 'C' || map_1d[a] == '\n')
			a++;
		else
		{
			ft_error(6);
			return (1);
		}
	}
	if (ft_check_map2(map_2d, k) == 1 || ft_check_map3(map_1d, k) == 1)
		return (1);
	if (ft_strlen(map_2d[0]) == k)
	{
		ft_error(5);
		return (1);
	}
	else
		return (0);
}

int	ft_check_map2(char	**t, size_t k)
{
	size_t	len;
	size_t	j;

	len = ft_strlen(t[0]);
	j = 1;
	while (t[j])
	{
		if (ft_strlen(t[j]) != len)
		{
			ft_error(3);
			return (1);
		}
		else
			j++;
	}
	if (ft_strchr(t[0], '0') || ft_strchr(t[0], 'P') || ft_strchr(t[0], 'E') \
		|| ft_strchr(t[0], 'C') || ft_strchr(t[k - 1], '0') \
		|| ft_strchr(t[k - 1], 'P') || ft_strchr(t[k - 1], 'E') \
		|| ft_strchr(t[k - 1], 'C'))
	{
		ft_error(3);
		return (1);
	}
	else
		return (0);
}

int	ft_check_map3(char *g, size_t k)
{
	int	i;
	int	p;
	int	e;
	int	c;

	i = 0;
	p = 0;
	e = 0;
	c = 0;
	while (g[i])
	{
		if (g[i] == 'P')
			p += 1;
		else if (g[i] == 'C')
			c += 1;
		else if (g[i] == 'E')
			e += 1;
		i++;
	}
	if (p > 1 || p < 1 || c < 1 || e > 1 || e < 1)
	{
		ft_error(4);
		return (1);
	}
	return (0);
}
