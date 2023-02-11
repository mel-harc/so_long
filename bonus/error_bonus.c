/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:14:42 by mel-harc          #+#    #+#             */
/*   Updated: 2023/02/11 16:43:07 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_error(int i)
{
	if (i == 1)
		write(1, "this map is not comlety close\n", 30);
	if (i == 2)
		ft_erro(1);
	else if (i == 3)
		write(1, "this map is not valid\n", 22);
	else if (i == 4)
	{
		write(1, "you should find one player and at least one collectibe,", 56);
		write(1, " exit, enemy\n", 14);
	}
	else if (i == 5)
		write(1, "map is not rectangular\n", 23);
	else if (i == 6)
		write(1, "invalid caracter in the map!\n", 29);
	else if (i == 7)
		write(1, "invalid map!\n", 13);
	else if (i == 8)
		write(1, "invalid extion\n", 15);
	else if (i == 9)
	{
		write(1, "invalid image\n", 14);
		exit(1);
	}
}

void	ft_erro(int i)
{
	if (i == 1)
	{
		write(1, "map is not found\n", 17);
		exit(1);
	}
}
