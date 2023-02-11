/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:44:20 by mel-harc          #+#    #+#             */
/*   Updated: 2023/02/10 23:47:51 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_count(int n)
{
	size_t			l;

	l = 0;
	if (n == -2147483648)
		return (11);
	if (n <= 0)
		l++;
	while (n)
	{
		n /= 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	l;
	long int		nb;

	l = ft_count(n);
	str = malloc(sizeof(char) * (l + 1));
	if (!str)
		return (NULL);
	nb = n;
	str[l] = '\0';
	if (nb == 0)
		str[l - 1] = 48;
	if (n < 0)
	{
		str[0] = 45;
		nb = -nb;
	}
	while (nb)
	{
		str[l - 1] = ((nb % 10) + 48);
		nb /= 10;
		l--;
	}
	return (str);
}
