#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr(int i)
{
	char	c;

	if (i > 9)
		ft_putnbr(i / 10);
	c = i % 10 + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	n;
	int	i;
	int	first;

	if (ac == 2)
	{
		n = atoi(av[1]);
		i = 2;
		first = 1;
		while (n > 1)
		{
			if (n % i == 0)
			{
				if (!first)
					write(1, "*", 1);
				ft_putnbr(i);
				n /= i;
				first = 0;
			}
			else
				i++;
		}
	}
	printf("\n");
	return (0);
}
