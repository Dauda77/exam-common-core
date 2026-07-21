#include <unistd.h>

int	main(int ac, char **av)
{
	int count = 0;
	if (ac == 2)
	{
		while (*av[1])
		{
			if (*av[1] >= 'a' && *av[1] <= 'z')
				count = *av[1] - 'a' + 1;
			else if (*av[1] >= 'A' && *av[1] <= 'Z')
				count = *av[1] - 'A' + 1;
			else
				count = 1;
			while (count > 0)
			{
				write(1, av[1], 1);
				count--;
			}
			av[1]++;
		}
	}
	write(1, "\n", 1);
}
