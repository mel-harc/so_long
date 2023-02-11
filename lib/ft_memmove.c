/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:51:43 by mel-harc          #+#    #+#             */
/*   Updated: 2023/02/10 23:49:31 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;

	i = 0;
	if (dst > src)
	{
		while (len--)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	else
		return (ft_memcpy(dst, src, len));
	return (dst);
}
