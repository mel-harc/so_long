/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:04:33 by mel-harc          #+#    #+#             */
/*   Updated: 2023/02/10 23:53:18 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char c))
{
	size_t			i;
	size_t			len;
	char			*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
