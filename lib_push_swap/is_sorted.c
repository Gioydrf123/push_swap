/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:42:06 by gmu               #+#    #+#             */
/*   Updated: 2025/04/24 23:33:27 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

bool	is_sorted(const long *stack_a)
{
	long	i;

	i = 0;
	while (stack_a[i] != MAX)
	{
		if (stack_a[i] > stack_a[i + 1] && stack_a[i + 1] != MAX)
			return (false);
		++i;
	}
	return (true);
}
