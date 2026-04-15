/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 09:21:43 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/04/14 09:27:03 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	i;

	i = 96;
	while (++i <= 122)
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
	ft_print_alphabet();
	return (0);
}
*/
