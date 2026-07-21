#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		char seen[256] = {0};
		int i = 0;
		int j = 0;

		while (av[1][i])
		{
			unsigned char c = av[1][i];

			if (seen[c] == 0)
			{
				j = 0;
				while (av[2][j])
				{
					if (av[2][j] == c)
					{
						write(1, &c, 1);
						seen[c] = 1;
						break ;
					}
					j++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
}