/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 09:31:37 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/04/14 14:44:18 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < nb / i)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

/*
int	ft_sqrt(int nb)
{
	int	low;
	int	high;
	int	mid;

	if (nb <= 0)
		return (0);
	low = 1;
	high = 46340;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (mid == nb / mid)
			return (mid);
		if (mid < nb / mid)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (0);
}
*/
/*
#include <stdio.h>
#include <time.h>

int	main(void)
{
	int		i;
	clock_t	start;
	clock_t	end;
	double	time;

	i = 2147395600;
	//i = 25;
	start = clock();
	ft_sqrt(i);
	end = clock();
	time = (end - start) / CLOCKS_PER_SEC;
	printf("sqrt(%i) = %i\n", i, ft_sqrt(i));
	printf("took %.5f seconds\n", time);
	return (0);
}
*/
