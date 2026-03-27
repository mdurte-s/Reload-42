int	ft_iterative_factorial(int nb)
{
	int	f;

	if (nb < 0)
		return (0);
	f = 1;
	while (1 < nb)
	{
		f *= nb;
		nb--;
	}
	return (f);
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

	i = 13;
	start = clock();
	ft_iterative_factorial(i);
	end = clock();
	time = end - start;
	printf("%d! = %d\n", i, ft_iterative_factorial(i));
	printf("took %.2f seconds\n", time);
	return (0);
}
*/
