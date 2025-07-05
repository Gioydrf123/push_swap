/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_variant.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:02:56 by gmu               #+#    #+#             */
/*   Updated: 2025/05/04 08:41:32 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_variant.h"

static void	ft_bzero_variant(void *s, size_t n)
{
	char	*p;

	p = s;
	while (n--)
		*p++ = '\0';
}

void	*ft_calloc_variant(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
	{
		write(1, "Memory allocation error\n", 24);
		free (ptr);
		exit (1);
	}
	ft_bzero_variant(ptr, (count * size));
	return (ptr);
}
