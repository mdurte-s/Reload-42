/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 09:30:13 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/04/14 09:30:17 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int main(void)
{
	int	a;
	int	b;
	int div;
	int	mod;

	a = 10;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("div = %i\nmod = %i", div, mod);
	return (0);
}
*/
