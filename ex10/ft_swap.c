void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}


#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 42;
	ft_swap(&a, &b);
	printf("a = %i\nb = %i\n", a, b);
	return (0);
}
