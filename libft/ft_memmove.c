/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:04:49 by gmu               #+#    #+#             */
/*   Updated: 2024/12/02 16:05:15 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*f;
	char		*t;

	f = src;
	t = dest;
	if (f < t)
	{
		f = f + n;
		t = t + n;
		while (n-- > 0)
			*--t = *--f;
	}
	else
		while (n-- > 0)
			*t++ = *f++;
	return (dest);
}
