/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:13:00 by mel-harc          #+#    #+#             */
/*   Updated: 2023/02/11 00:49:34 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

char	**ft_read_map(t_info *v, int fd)
{
	char	*s;

	v->count = 0;
	while (1)
	{
		s = get_next_line(fd);
		if (s == NULL)
			break ;
		if (*s == '\n' || s[0] != '1' || s[ft_strlen(s) - 2] != '1')
		{
			ft_error(1);
			return (NULL);
		}
		v->map_1d = ft_strjoin(v->map_1d, s);
		v->count++;
		free(s);
	}
	if (*v->map_1d == '\0')
	{
		free(v->map_1d);
		ft_error(1);
		return (NULL);
	}
	v->map_2d = ft_split(v->map_1d, '\n');
	return (v->map_2d);
}
