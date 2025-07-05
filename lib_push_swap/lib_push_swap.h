/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_push_swap.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:34:06 by gmu               #+#    #+#             */
/*   Updated: 2025/04/24 20:51:47 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_PUSH_SWAP_H
# define LIB_PUSH_SWAP_H

# ifndef MAX
#  define MAX 2147483648
# endif

# include <stdbool.h>

long	ft_atol_ps(const char *str);
long	ft_strlen_ps(const long *s);
bool	is_sorted(const long *stack_a);
long	find_max(const long *stack_a);
long	find_min(const long *stack_a);
bool	up_median(const long *stack, long n);

#endif
