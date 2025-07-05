/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_instruction_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:49:48 by gmu               #+#    #+#             */
/*   Updated: 2025/05/04 11:24:58 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library_bonus.h"

bool	strcmp_ps(long *stack_a, long *stack_b, char *trimmed)
{
	if (ft_strcmp(trimmed, "pa") == 0)
		pa_(stack_a, stack_b);
	else if (ft_strcmp(trimmed, "pb") == 0)
		pb_(stack_a, stack_b);
	else if (ft_strcmp(trimmed, "rra") == 0)
		reverse_rotate(stack_a);
	else if (ft_strcmp(trimmed, "rrb") == 0)
		reverse_rotate(stack_b);
	else if (ft_strcmp(trimmed, "rrr") == 0)
		rrr_(stack_a, stack_b);
	else if (ft_strcmp(trimmed, "sa") == 0)
		swap_ps(stack_a);
	else if (ft_strcmp(trimmed, "sb") == 0)
		swap_ps(stack_b);
	else if (ft_strcmp(trimmed, "ss") == 0)
		ss_(stack_a, stack_b);
	else if (ft_strcmp(trimmed, "ra") == 0)
		rotate(stack_a);
	else if (ft_strcmp(trimmed, "rb") == 0)
		rotate(stack_b);
	else if (ft_strcmp(trimmed, "rr") == 0)
		rr_(stack_a, stack_b);
	else
		return (false);
	return (true);
}

bool	execute_instruction(long *stack_a, long *stack_b, char *line)
{
	char	*trimmed;

	trimmed = ft_strtrim(line, "\n");
	if (!trimmed)
		return (false);
	if (trimmed[0] == '\0')
	{
		free(trimmed);
		return (false);
	}
	if (strcmp_ps(stack_a, stack_b, trimmed) == false)
	{
		free(trimmed);
		return (false);
	}
	free (trimmed);
	return (true);
}
