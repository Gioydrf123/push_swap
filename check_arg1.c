/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <gmu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:16:17 by gmu               #+#    #+#             */
/*   Updated: 2025/05/04 11:05:39 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

static int	is_duplicate(int num, char **argv, int i)
{
	i++;
	while (argv[i])
		if (ft_atoi(argv[i++]) == num)
			return (1);
	return (0);
}

static int	is_valid_num(char *num)
{
	if (*num == '-')
		num++;
	while (*num)
		if (!ft_isdigit(*num++))
			return (0);
	return (1);
}

bool	validate_numeric_limits(char **value, int start_index)
{
	long	tmp;
	int		i;

	i = start_index;
	while (value[i])
	{
		tmp = ft_atol_ps(value[i]);
		if (tmp < -2147483648)
		{
			write(2, "Error\n", 6);
			return (false);
		}
		if (tmp > 2147483647)
		{
			write(2, "Error\n", 6);
			return (false);
		}
//		if (i > 500)
//		{
//			write(2, "Error\n", 6);
//			return (false);
//		}
		i++;
	}
	return (true);
}

bool	validate_format_and_duplicates(char **value, int start_index)
{
	long	tmp;
	int		i;

	i = start_index;
	while (value[i])
	{
		tmp = ft_atol_ps(value[i]);
		if (!is_valid_num(value[i]))
		{
			write(2, "Error\n", 6);
			return (false);
		}
		if (is_duplicate(tmp, value, i))
		{
			write(2, "Error\n", 6);
			return (false);
		}
		i++;
	}
	return (true);
}

bool	arg_check_valid(int argc, char **argv)
{
	char	**value;
	bool	is_valid;
	int		i;

	i = 0;
	if (argc == 2)
		value = ft_split(argv[1], ' ');
	else
	{
		value = argv;
		i++;
	}
	is_valid = validate_format_and_duplicates(value, i)
		&& validate_numeric_limits(value, i);
	if (argc == 2)
	{
		ft_free(value);
		free(value);
	}
	return (is_valid);
}
