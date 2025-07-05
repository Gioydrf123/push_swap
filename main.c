/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <gmu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 00:11:20 by gmu               #+#    #+#             */
/*   Updated: 2025/05/03 22:32:43 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

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

	if (!arg_check_valid(argc, argv))
		return (0);
	i = count_input(argc, argv);
	stack_a = (long *)ft_calloc_variant(5 + i, sizeof(long));
	stack_b = (long *)ft_calloc_variant(5 + i, sizeof(long));
	stack_a[0] = MAX;
	stack_b[0] = MAX;
	insert_data_in_array(argc, argv, stack_a);
	meccanical_turk(stack_a, stack_b);
	free(stack_a);
	free(stack_b);
	return (0);
}
