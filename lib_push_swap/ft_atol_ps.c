/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:42:06 by gmu               #+#    #+#             */
/*   Updated: 2025/04/24 20:53:22 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

int	ft_isdigit_ps(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}

long	ft_atol_ps(const char *str)
{
	long	value;
	int		sign;

	sign = 1;
	value = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
		sign = 44 - *str++;
	while (ft_isdigit_ps(*str))
	{
		value = value * 10 + (*str++ - '0');
		if (value > 2147483648 && sign == -1)
			return (sign * value);
		if (value > 2147483647 && sign == 1)
			return (sign * value);
	}
	return (sign * value);
}
