/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:53:14 by gmu               #+#    #+#             */
/*   Updated: 2025/05/03 14:28:46 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library_bonus.h"

unsigned int	count_input(int argc, char **argv)
{
	unsigned int	i;

	i = 0;
	while (argv[i])
		i++;
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
			++i;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	unsigned int	i;
	long			*stack_a;
	long			*stack_b;

	i = count_input(argc, argv);
	if (!arg_check_valid(argc, argv) || argc == 1)
		return (0);
	stack_a = (long *)ft_calloc_variant(5 + i, sizeof(long));
	stack_b = (long *)ft_calloc_variant(5 + i, sizeof(long));
	stack_a[0] = MAX;
	stack_b[0] = MAX;
	insert_data_in_array(argc, argv, stack_a);
	if (read_std(stack_a, stack_b))
	{
		free(stack_a);
		free(stack_b);
		return (1);
	}
	if (is_sorted(stack_a) && stack_b[0] == MAX)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free(stack_a);
	free(stack_b);
	return (0);
}
