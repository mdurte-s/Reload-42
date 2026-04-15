/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 09:35:14 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/04/14 14:50:23 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}


#include <stdio.h>

int	main(void)
{
	int	i;
	int	min;
	int	max;

	i = 0;
	min = 10;
	max = 100;
	ft_range(min, max);
	printf("range(%d, %d) = {", min, max);
	while (i < max - min)
	{
		printf("%d", ft_range(min, max)[i]);
		if (!(i + 1 == max - min))
			printf(", ");
		i++;
	}
	printf("}\n");
	return (0);
}
