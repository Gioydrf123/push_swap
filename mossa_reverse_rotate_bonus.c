/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mossa_reverse_rotate_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 23:22:50 by gmu               #+#    #+#             */
/*   Updated: 2025/05/04 08:57:53 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library_bonus.h"

void	reverse_rotate(long *stack)
{
	unsigned int	i;
	long			temp;

	if (stack[0] == MAX)
		return ;
	i = ft_strlen_ps(stack) -1;
	temp = stack[i];
	while (i >= 1)
	{
		stack[i] = stack[i - 1];
		--i;
	}
	stack[0] = temp;
}

void	rrr_(long *stack_a, long *stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}
