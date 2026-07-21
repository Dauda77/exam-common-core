#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		char seen[256] = {0};
		int i = 0;
		unsigned char  c;

		while (av[1][i])
		{
			c = av[1][i];
			if (seen[c] == 0)
			{
				write(1, &c, 1);
				seen[c] = 1;
			}
			i++;
		}
		int j = 0;

		while (av[2][j])
		{
			c = av[2][j];
			if (seen[c] == 0)
			{
				write(1, &c, 1);
				seen[c] = 1;
			}
			j++;
		}
	}
	write(1, "\n", 1);
}