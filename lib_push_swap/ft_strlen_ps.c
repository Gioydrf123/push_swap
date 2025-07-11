/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_ps.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:42:06 by gmu               #+#    #+#             */
/*   Updated: 2025/04/24 23:20:17 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

long	ft_strlen_ps(const long *s)
{
	const long	*ft_s;

	ft_s = s;
	while (*ft_s != MAX)
		++ft_s;
	return (ft_s - s);
}
