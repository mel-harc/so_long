/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:39:16 by mel-harc          #+#    #+#             */
/*   Updated: 2023/02/10 23:45:22 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				sign;
	size_t			rest;

	i = 0;
	sign = 1;
	rest = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		rest = rest * 10 + str[i] - 48;
		if (rest > 9223372036854775807 && sign == -1)
			return (0);
		else if (rest > 9223372036854775807 && sign == 1)
			return (-1);
		i++;
	}
	return (rest * sign);
}
