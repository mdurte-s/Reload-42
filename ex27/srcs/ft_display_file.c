/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 09:43:51 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/04/16 16:25:05 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_display_file(char *filename)
{
	int		size;
	int		file_descriptor;
	char	buffer[BUF_SIZE + 1];

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor < 0)
	{
		ft_putstr("Cannot read file.\n", 2);
		return (1);
	}
	size = read(file_descriptor, buffer, BUF_SIZE);
	while (size > 0)
	{
		write(1, buffer, size);
		size = read(file_descriptor, buffer, BUF_SIZE);
	}
	if (size == -1)
	{
		ft_putstr("Cannot read file.\n", 2);
		return (1);
	}
	close(file_descriptor);
	return (0);
}
