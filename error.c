/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:58:56 by mel-harc          #+#    #+#             */
/*   Updated: 2023/02/11 23:08:15 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_error(int i)
{
	write(1, "Error\n", 6);
	if (i == 1)
		write(1, "this map is not comlety close\n", 30);
	if (i == 2)
		ft_erro(1);
	else if (i == 3)
		write(1, "this map is not valid\n", 22);
	else if (i == 4)
	{
		write(1, "you should find one player and at least one collectibe", 57);
		write(1, "one exit\n", 9);
	}
	else if (i == 5)
		write(1, "map is not rectangular\n", 23);
	else if (i == 6)
		write(1, "not valid caracter in the map!\n", 31);
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
