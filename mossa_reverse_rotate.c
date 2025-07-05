/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mossa_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 23:22:50 by gmu               #+#    #+#             */
/*   Updated: 2025/04/24 23:25:46 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

void	reverse_rotate(long *stack)
{
	unsigned int	i;
	long			temp;

	i = ft_strlen_ps(stack) -1;
	temp = stack[i];
	while (i >= 1)
	{
		stack[i] = stack[i - 1];
		--i;
	}
	stack[0] = temp;
}

void	rra(long *stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(long *stack_b)
{
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(long *stack_a, long *stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}
