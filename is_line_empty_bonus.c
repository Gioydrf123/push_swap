/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_line_empty_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 21:59:17 by gmu               #+#    #+#             */
/*   Updated: 2025/05/03 22:04:21 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library_bonus.h"

bool	is_line_empty(const char *line)
{
	bool	result;
	char	*trimmed;

	trimmed = ft_strtrim(line, " \t");
	if (!trimmed)
		return (true);
	result = (trimmed[0] == '\0');
	free(trimmed);
	return (result);
}
