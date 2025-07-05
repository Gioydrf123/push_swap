/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:09:17 by gmu               #+#    #+#             */
/*   Updated: 2024/12/02 14:37:13 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_length;

	src_length = ft_strlen (src);
	if (size > 0)
	{
		if (src_length >= size)
		{
			ft_memcpy(dst, src, size - 1);
			dst[size - 1] = '\0';
		}
		else
			ft_memcpy(dst, src, src_length + 1);
	}
	return (src_length);
}
