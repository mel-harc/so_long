/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:58:56 by mel-harc          #+#    #+#             */
/*   Updated: 2023/02/09 05:42:29 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_error(int i)
{
	if (i == 1)
		write(1, "this map is not comlety close\n", 30);
	else if (i == 2)
		write(1, "map is not find\n", 16);
	else if (i == 3)
		write(1, "this map is not valid\n", 22);
	else if (i == 4)
		write(1, "you should find one player and at least one collectibe\n", 55);
	else if (i == 5)
		write(1, "map is not rectangular\n", 23);
	else if (i == 6)
		write(1, "not valid caracter in the map!\n", 31);
	else if (i == 7)
		write(1, "invalid map!\n", 13);
	else if (i == 8)
		write(1, "invalid extion\n", 15);
}
