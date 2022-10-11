#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 0)
	{
		result = nb * ft_recursive_power(nb, (power - 1));
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	return (result);
}
int	main()
{
	printf("%d", ft_recursive_power(5, 3));
}