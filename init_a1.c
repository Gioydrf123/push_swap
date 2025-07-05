/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 00:05:09 by gmu               #+#    #+#             */
/*   Updated: 2025/04/27 13:42:23 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

void	execute_up(long *stack_a, long n_a, long *stack_b, long n_b)
{
	while ((n_a != stack_a[0]) && (n_b != stack_b[0]))
		rr(stack_a, stack_b);
	if (n_a != stack_a[0])
		while (n_a != stack_a[0])
			ra(stack_a);
	if (n_b != stack_b[0])
		while (n_b != stack_b[0])
			rb(stack_b);
}

void	execute_down(long *stack_a, long n_a, long *stack_b, long n_b)
{
	while ((n_a != stack_a[0]) && (n_b != stack_b[0]))
		rrr(stack_a, stack_b);
	if (n_a != stack_a[0])
		while (n_a != stack_a[0])
			rra(stack_a);
	if (n_b != stack_b[0])
		while (n_b != stack_b[0])
			rrb(stack_b);
}

void	execute(long *stack_a, long n_a, long *stack_b, long n_b)
{
	if (up_median(stack_a, n_a) && up_median(stack_b, n_b))
		execute_up(stack_a, n_a, stack_b, n_b);
	if (!up_median(stack_a, n_a) && !up_median(stack_b, n_b))
		execute_down(stack_a, n_a, stack_b, n_b);
	if (!up_median(stack_a, n_a) && up_median(stack_b, n_b))
	{
		while (n_a != stack_a[0])
			rra(stack_a);
		while (n_b != stack_b[0])
			rb(stack_b);
	}
	if (up_median(stack_a, n_a) && !up_median(stack_b, n_b))
	{
		while (n_a != stack_a[0])
			ra(stack_a);
		while (n_b != stack_b[0])
			rrb(stack_b);
	}
	pb(stack_a, stack_b);
}

long	find_t_b(const long stack_a, const long *stack_b)
{
	unsigned int	i;
	long			temp;

	i = 0;
	temp = -MAX;
	if (find_min(stack_b) > stack_a)
		return (find_max(stack_b));
	if (find_max(stack_b) < stack_a)
		return (find_max(stack_b));
	i = 0;
	while (stack_b[i] != MAX)
	{
		if (stack_a > stack_b[i])
			if (temp < stack_b[i])
				temp = stack_b[i];
		++i;
	}
	return (temp);
}

void	init_a(long *stack_a, long *stack_b)
{
	long	b;
	long	i;
	long	cost;
	long	temp_a;
	long	temp_b;

	i = 0;
	cost = MAX / 2;
	temp_a = stack_a[i];
	while (stack_a[i] != MAX)
	{
		b = find_t_b(stack_a[i], stack_b);
		if (cost > cost_calc(stack_a, stack_a[i], stack_b, b))
		{
			temp_a = stack_a[i];
			temp_b = b;
			cost = cost_calc(stack_a, stack_a[i], stack_b, b);
		}
		++i;
	}
	execute(stack_a, temp_a, stack_b, temp_b);
}
