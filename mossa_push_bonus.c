/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mossa_push_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 23:27:49 by gmu               #+#    #+#             */
/*   Updated: 2025/05/03 14:29:23 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library_bonus.h"

void	pa_(long *stack_a, long *stack_b)
{
	long	i;

	if (stack_b[0] == MAX)
	{
		return ;
	}
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
}

void	pb_(long *stack_a, long *stack_b)
{
	long	i;

	if (stack_a[0] == MAX)
	{
		return ;
	}
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
}
