/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mossa_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 23:14:01 by gmu               #+#    #+#             */
/*   Updated: 2025/04/30 13:00:25 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

void	rotate(long *stack)
{
	unsigned int	i;
	long			tmp;

	i = 0;
	tmp = stack[0];
	while (stack[i] != MAX)
	{
		stack[i] = stack[i + 1];
		++i;
	}
	--i;
	stack[i] = tmp;
}

void	ra(long *stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rb(long *stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void	rr(long *stack_a, long *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}
