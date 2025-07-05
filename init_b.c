/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 00:09:11 by gmu               #+#    #+#             */
/*   Updated: 2025/04/27 13:00:04 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

void	execute_a(long *stack_a, long n_a, long *stack_b)
{
	if (up_median(stack_a, n_a))
	{
		while (stack_a[0] != n_a)
			ra(stack_a);
	}
	if (!up_median(stack_a, n_a))
	{
		while (stack_a[0] != n_a)
			rra(stack_a);
	}
	pa(stack_a, stack_b);
}

long	find_t_a(const long *stack_a, const long stack_b)
{
	unsigned int	i;
	long			temp;

	i = 0;
	temp = MAX;
	if (find_min(stack_a) > stack_b)
		return (find_min(stack_a));
	if (find_max(stack_a) < stack_b)
		return (find_min(stack_a));
	i = 0;
	while (stack_a[i] != MAX)
	{
		if (stack_a[i] > stack_b)
			if (temp > stack_a[i])
				temp = stack_a[i];
		++i;
	}
	return (temp);
}

void	init_b(long *stack_a, long *stack_b)
{
	long	a;
	long	i;

	a = 0;
	i = 0;
	if (stack_b[i] != MAX)
		a = find_t_a(stack_a, stack_b[i]);
	execute_a(stack_a, a, stack_b);
}
