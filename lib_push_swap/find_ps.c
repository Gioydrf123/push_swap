/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_ps.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 23:43:22 by gmu               #+#    #+#             */
/*   Updated: 2025/04/25 00:13:03 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

long	find_max(const long *stack_a)
{
	long	temp;
	long	i;

	i = 0;
	temp = stack_a[i];
	while (stack_a[i] != MAX)
	{
		if (temp < stack_a[i])
			temp = stack_a[i];
		++i;
	}
	return (temp);
}

long	find_min(const long *stack_a)
{
	long	temp;
	long	i;

	i = 0;
	temp = stack_a[i];
	while (stack_a[i] != MAX)
	{
		if (temp > stack_a[i])
			temp = stack_a[i];
		++i;
	}
	return (temp);
}
