/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 23:05:33 by gmu               #+#    #+#             */
/*   Updated: 2025/05/03 14:04:03 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

void	insert_data_in_array(int argc, char **argv, long *stack_a)
{
	char	**value;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (argc == 2)
		value = ft_split(argv[1], ' ');
	else
		value = argv + 1;
	while (value != NULL && value[i])
	{
		stack_a[j] = ft_atol_ps(value[i]);
		i++;
		j++;
	}
	stack_a[j] = MAX;
	if (argc == 2)
	{
		ft_free(value);
		free(value);
	}
}
