/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mossa_s_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 23:10:20 by gmu               #+#    #+#             */
/*   Updated: 2025/05/03 22:42:47 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library_bonus.h"

void	swap_ps(long *stack)
{
	long	tmp;

	if (stack[0] == MAX)
		return ;
	tmp = stack[0];
	stack[0] = stack[1];
	stack[1] = tmp;
}

void	ss_(long *stack_a, long *stack_b)
{
	swap_ps(stack_a);
	swap_ps(stack_b);
}
