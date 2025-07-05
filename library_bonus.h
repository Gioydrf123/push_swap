/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:59:58 by gmu               #+#    #+#             */
/*   Updated: 2025/04/29 14:38:47 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARY_BONUS_H
# define LIBRARY_BONUS_H

# ifndef MAX
#  define MAX 2147483648
# endif
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif
# include "libft/libft.h"
# include "lib_push_swap/lib_push_swap.h"
# include "libft_variant/libft_variant.h"

void	ft_free(char **str);
bool	arg_check_valid(int argc, char **argv);

void	insert_data_in_array(int argc, char **argv, long *stack_a);

void	pa_(long *stack_a, long *stack_b);
void	pb_(long *stack_a, long *stack_b);
void	reverse_rotate(long *stack);
void	rrr_(long *stack_a, long *stack_b);
void	rotate(long *stack);
void	rr_(long *stack_a, long *stack_b);
void	swap_ps(long *stack);
void	ss_(long *stack_a, long *stack_b);

bool	execute_instruction(long *stack_a, long *stack_b, char *line);
bool	is_line_empty(const char *line);
bool	read_std(long *stack_a, long *stack_b);

#endif
