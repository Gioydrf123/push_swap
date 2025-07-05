/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_median.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 00:01:14 by gmu               #+#    #+#             */
/*   Updated: 2025/04/25 00:13:19 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

bool	up_median(const long *stack, long n)
{
	unsigned int	temp;
	unsigned int	i;

	i = 0;
	while (n != stack[i])
		++i;
	temp = ft_strlen_ps(stack);
	if ((temp % 2) == 1)
		++temp;
	temp = temp / 2;
	if (temp > i)
		return (true);
	return (false);
}
