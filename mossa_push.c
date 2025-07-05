/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mossa_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <gmu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 23:27:49 by gmu               #+#    #+#             */
/*   Updated: 2025/04/29 13:13:14 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

void	pa(long *stack_a, long *stack_b)
{
	long	i;

	i = ft_strlen_ps(stack_a) + 2;
	while (i >= 1)
	{
		stack_a[i] = stack_a[i - 1];
		--i;
	}
	stack_a[0] = stack_b[0];
	i = 0;
	while (stack_b[i] != MAX)
	{
		stack_b[i] = stack_b[i + 1];
		++i;
	}
	write(1, "pa\n", 3);
}

void	pb(long *stack_a, long *stack_b)
{
	long	i;

	i = ft_strlen_ps(stack_b) + 2;
	while (i >= 1)
	{
		stack_b[i] = stack_b[i - 1];
		--i;
	}
	stack_b[0] = stack_a[0];
	i = 0;
	while (stack_a[i] != MAX)
	{
		stack_a[i] = stack_a[i + 1];
		++i;
	}
	write(1, "pb\n", 3);
}
