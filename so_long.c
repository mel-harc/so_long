/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:10:58 by mel-harc          #+#    #+#             */
/*   Updated: 2023/02/09 01:44:37 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	int		fd;
	t_info	s;

	s.count = 0;
	if (ft_check_ext(av[1]) == 1)
	{
		ft_error(8);
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		exit(1);
	s.map_1d = ft_strdup("");
	if (!s.map_1d)
		return (0);
	s.map_2d = ft_read_map(&s, fd);
	if (!s.map_2d)
		return (0);
	if (ft_check_map1(s.map_2d, s.map_1d, s.count) == 1 \
		|| ft_check_path(&s) == 1)
		return (0);
	open_window(ft_strlen(s.map_2d[0]) * 50, s.count * 50, &s);
	// system("leaks a.out");
	return (0);
}
