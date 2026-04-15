/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 09:27:37 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/04/14 09:27:48 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	i;

	i = 47;
	while (++i <= 57)
		ft_putchar(i);
}

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
