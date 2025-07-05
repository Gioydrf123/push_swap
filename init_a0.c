/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a0.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <gmu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 00:05:09 by gmu               #+#    #+#             */
/*   Updated: 2025/04/29 11:24:57 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

long	cost_calc_up(long *stack_a, long n_a, long *stack_b, long n_b)
{
	long	i;
	long	j;

	i = 0;
	j = 0;
	while (stack_a[i] != n_a)
		++i;
	while (stack_b[j] != n_b)
		++j;
	if (i > j)
		return (i);
	return (j);
}

long	cost_calc_down(long *stack_a, long n_a, long *stack_b, long n_b)
{
	long	i_;
	long	j_;
	long	i;
	long	j;

	i = 0;
	j = 0;
	i_ = ft_strlen_ps(stack_a);
	j_ = ft_strlen_ps(stack_b);
	while (stack_a[i_] != n_a)
	{
		++i;
		--i_;
	}
	while (stack_b[j_] != n_b)
	{
		++j;
		--j_;
	}
	if (i > j)
		return (i);
	return (j);
}

long	cost_calc_down_up(long *stack_a, long n_a, long *stack_b, long n_b)
{
	long	i_;
	long	i;
	long	j;

	i = 0;
	j = 0;
	i_ = ft_strlen_ps(stack_a);
	while (stack_a[i_] != n_a)
	{
		++i;
		--i_;
	}
	while (stack_b[j] != n_b)
		++j;
	return (i + j);
}

long	cost_calc_up_down(long *stack_a, long n_a, long *stack_b, long n_b)
{
	long	i;
	long	j;
	long	j_;

	i = 0;
	j = 0;
	j_ = ft_strlen_ps(stack_b);
	while (stack_a[i] != n_a)
	{
		++i;
	}
	while (stack_b[j_] != n_b)
	{
		++j;
		--j_;
	}
	return (i + j);
}

long	cost_calc(long *stack_a, long n_a, long *stack_b, long n_b)
{
	long	i;

	i = 0;
	if (up_median(stack_a, n_a) && up_median(stack_b, n_b))
		return (cost_calc_up(stack_a, n_a, stack_b, n_b));
	if (!up_median(stack_a, n_a) && !up_median(stack_b, n_b))
		return (cost_calc_down(stack_a, n_a, stack_b, n_b));
	if (!up_median(stack_a, n_a) && up_median(stack_b, n_b))
		return (cost_calc_down_up(stack_a, n_a, stack_b, n_b));
	if (up_median(stack_a, n_a) && !up_median(stack_b, n_b))
		return (cost_calc_up_down(stack_a, n_a, stack_b, n_b));
	return (i);
}
