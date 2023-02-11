/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ext_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:02:42 by mel-harc          #+#    #+#             */
/*   Updated: 2023/02/11 00:16:59 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_check_ext(char *str)
{
	size_t	len;

	len = ft_strlen(str);
	if (!ft_strnstr(&str[len - 4], ".ber", 4))
		return (1);
	return (0);
}
