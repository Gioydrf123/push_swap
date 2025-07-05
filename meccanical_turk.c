/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   meccanical_turk.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 00:10:25 by gmu               #+#    #+#             */
/*   Updated: 2025/04/27 18:58:14 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

void	small_on_top(long *stack_a)
{
	long	min;

	min = find_min(stack_a);
	if (up_median(stack_a, min))
	{
		while (stack_a[0] != min)
			ra(stack_a);
	}
	else
	{
		while (stack_a[0] != min)
			rra(stack_a);
	}
}

void	sort_stack(long *stack_a, long *stack_b)
{
	long	len_a;
	long	i;

	i = 0;
	len_a = ft_strlen_ps(stack_a);
	if (len_a-- > 3 && !is_sorted(stack_a))
		pb(stack_a, stack_b);
	if (len_a-- > 3 && !is_sorted(stack_a))
		pb(stack_a, stack_b);
	while (len_a-- > 3 && !is_sorted(stack_a))
		init_a(stack_a, stack_b);
	sort_three(stack_a);
	while (stack_b[i] != MAX)
		init_b(stack_a, stack_b);
	small_on_top(stack_a);
}

void	meccanical_turk(long *stack_a, long *stack_b)
{
	if (!is_sorted(stack_a))
	{
		if (ft_strlen_ps(stack_a) == 2)
			sa(stack_a);
		else if (ft_strlen_ps(stack_a) == 3)
			sort_three(stack_a);
		else
			sort_stack(stack_a, stack_b);
	}
}
