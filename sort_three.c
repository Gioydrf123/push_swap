/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 23:58:43 by gmu               #+#    #+#             */
/*   Updated: 2025/04/27 12:38:04 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

void	sort_three(long *stack_a)
{
	long	biggest;

	biggest = find_max(stack_a);
	if (biggest == stack_a[0])
		ra(stack_a);
	else if (biggest == stack_a[1])
		rra(stack_a);
	if (stack_a[0] > stack_a[1])
		sa(stack_a);
}
