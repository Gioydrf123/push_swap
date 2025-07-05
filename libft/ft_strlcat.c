/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:48:12 by gmu               #+#    #+#             */
/*   Updated: 2024/12/02 13:49:47 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const char	*ptr_dst;
	const char	*ptr_src;
	size_t		n;
	size_t		dlen;

	ptr_dst = dst;
	ptr_src = src;
	n = size;
	while (n-- != 0 && *dst != '\0')
		dst++;
	dlen = dst - ptr_dst;
	n = size - dlen;
	if (n-- == 0)
		return (dlen + ft_strlen(src));
	while (*src != '\0')
	{
		if (n != 0)
		{
			*dst++ = *src;
			n--;
		}
		src++;
	}
	*dst = '\0';
	return (dlen + (src - ptr_src));
}
