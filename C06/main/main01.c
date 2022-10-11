#include <unistd.h>

int	main(int argc, char	**arg)
{
	int	i;
	int	j;

	j = 1;
	if (argc > 1)
	{
		while (j < argc)
		{
			i = 0;
			while (arg[j][i] != '\0')
			{
				write (1, &arg[j][i], 1);
				i++;
			}	
			write (1, "\n", 1);
			j++;
		}
	}
	return (0);
}
