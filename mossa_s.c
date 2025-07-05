/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mossa_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 23:10:20 by gmu               #+#    #+#             */
/*   Updated: 2025/04/24 23:12:48 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

void	swap_ps(long *stack)
{
	long	tmp;

	tmp = stack[0];
	stack[0] = stack[1];
	stack[1] = tmp;
}

void	sa(long *stack_a)
{
	swap_ps(stack_a);
	write(1, "sa\n", 3);
}

void	sb(long *stack_b)
{
	swap_ps(stack_b);
	write(1, "sb\n", 3);
}

void	ss(long *stack_a, long *stack_b)
{
	swap_ps(stack_a);
	swap_ps(stack_b);
	write(1, "ss\n", 3);
}
