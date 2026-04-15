/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 09:30:50 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/04/14 09:30:52 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>
#include <time.h>

int	main(void)
{
	int		i;
	clock_t	start;
	clock_t	end;
	double	time;

	i = 5;
	start = clock();
	ft_recursive_factorial(i);
	end = clock();
	time = end - start;
	printf("%d! = %d\n", i, ft_recursive_factorial(i));
	printf("took %.2f seconds\n", time);
	return (0);
}
*/
