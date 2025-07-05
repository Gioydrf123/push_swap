/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_std_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 21:46:46 by gmu               #+#    #+#             */
/*   Updated: 2025/05/03 22:29:11 by gmu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library_bonus.h"

static bool	process_line(char *line, long *stack_a, long *stack_b)
{
	if (is_line_empty(line))
	{
		write(2, "Error\n", 6);
		return (false);
	}
	if (!execute_instruction(stack_a, stack_b, line))
	{
		write(2, "Error\n", 6);
		return (false);
	}
	return (true);
}

static bool	extract_and_process_line(char *buffer, size_t *offset,
		long *stack_a, long *stack_b)
{
	size_t	line_len;
	size_t	remaining;
	char	*newline_ptr;
	char	*line;

	newline_ptr = ft_memchr(buffer, '\n', *offset);
	if (!newline_ptr)
		return (true);
	line_len = newline_ptr - buffer;
	line = (char *)ft_calloc_variant(line_len + 1, sizeof(char));
	ft_memcpy(line, buffer, line_len);
	line[line_len] = '\0';
	if (!process_line(line, stack_a, stack_b))
	{
		free(line);
		return (false);
	}
	remaining = *offset - (line_len + 1);
	ft_memmove(buffer, newline_ptr + 1, remaining);
	*offset = remaining;
	free(line);
	return (true);
}

static bool	process_all_lines_in_buffer(char *buffer,
		size_t *offset, long *stack_a, long *stack_b)
{
	while (ft_memchr(buffer, '\n', *offset))
	{
		if (!extract_and_process_line(buffer, offset, stack_a, stack_b))
			return (false);
	}
	return (true);
}

static bool	process_remaining_input(char *buffer,
		size_t offset, long *stack_a, long *stack_b)
{
	char	*line;

	line = (char *)ft_calloc_variant(offset + 1, sizeof(char));
	ft_memcpy(line, buffer, offset);
	line[offset] = '\0';
	if (is_line_empty(line))
	{
		write(2, "Error\n", 6);
		free(line);
		return (false);
	}
	if (!execute_instruction(stack_a, stack_b, line))
	{
		write(2, "Error\n", 6);
		free(line);
		return (false);
	}
	free(line);
	return (true);
}

bool	read_std(long *stack_a, long *stack_b)
{
	ssize_t	bytes_read;
	size_t	offset;
	char	buffer[BUFFER_SIZE];
	bool	status;

	status = false;
	offset = 0;
	bytes_read = read(0, buffer + offset, BUFFER_SIZE - offset);
	while (bytes_read > 0)
	{
		if (status == true)
			bytes_read = read(0, buffer + offset, BUFFER_SIZE - offset);
		if (status == false)
			status = true;
		offset += bytes_read;
		if (!process_all_lines_in_buffer(buffer, &offset, stack_a, stack_b))
			return (true);
	}
	if (offset > 0 && !process_remaining_input
		(buffer, offset, stack_a, stack_b))
		return (true);
	return (false);
}
