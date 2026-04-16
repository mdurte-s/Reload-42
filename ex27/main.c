/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 08:54:44 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/04/16 15:03:32 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("File name missing.\n", 2);
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n", 2);
		return (1);
	}
	else
		ft_display_file(argv[1]);
	return (0);
}
