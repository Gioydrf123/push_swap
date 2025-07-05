/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mossa_rotate_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 23:14:01 by gmu               #+#    #+#             */
/*   Updated: 2025/04/30 13:00:56 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library_bonus.h"

void	rotate(long *stack)
{
	unsigned int	i;
	long			tmp;

	i = 0;
	tmp = stack[0];
	if (stack[0] == MAX)
		return ;
	while (stack[i] != MAX)
	{
		stack[i] = stack[i + 1];
		++i;
	}
	--i;
	stack[i] = tmp;
}

void	rr_(long *stack_a, long *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}
