/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:59:58 by gmu               #+#    #+#             */
/*   Updated: 2025/04/27 13:05:25 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARY_H
# define LIBRARY_H

# ifndef MAX
#  define MAX 2147483648
# endif

# include "libft/libft.h"
# include <unistd.h>
# include "lib_push_swap/lib_push_swap.h"
# include "libft_variant/libft_variant.h"

void	ft_free(char **str);
bool	arg_check_valid(int argc, char **argv);
void	insert_data_in_array(int argc, char **argv, long *stack_a);
void	pa(long *stack_a, long *stack_b);
void	pb(long *stack_a, long *stack_b);
void	rra(long *stack_a);
void	rrb(long *stack_b);
void	rrr(long *stack_a, long *stack_b);
void	ra(long *stack_a);
void	rb(long *stack_b);
void	rr(long *stack_a, long *stack_b);
void	sa(long *stack_a);
void	sb(long *stack_b);
void	ss(long *stack_a, long *stack_b);
void	sort_three(long *stack_a);
void	init_b(long *stack_a, long *stack_b);
long	cost_calc(long *stack_a, long n_a, long *stack_b, long n_b);
void	init_a(long *stack_a, long *stack_b);
void	meccanical_turk(long *stack_a, long *stack_b);

#endif
