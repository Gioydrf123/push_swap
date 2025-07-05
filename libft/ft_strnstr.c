/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:08:48 by gmu               #+#    #+#             */
/*   Updated: 2024/12/02 13:25:01 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	little_n;
	size_t	i;

	if (*little == '\0')
		return ((char *)big);
	little_n = ft_strlen(little);
	if (little_n == 0)
		return ((char *)big);
	i = 0;
	while (i < n && big[i] != '\0')
	{
		if (big[i] == little[0] && n - i >= little_n)
		{
			if (ft_strncmp(&big[i], little, little_n) == 0)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
