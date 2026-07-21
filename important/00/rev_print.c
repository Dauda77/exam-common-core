#include <unistd.h>

int	main(int ac, char **av)
{
	char *c = av[1];

	int i = 0;

	if (ac == 2)
	{
		//Strlen
		while (c[i])
			i++;
		while (i > 0)
		{
			i--;
			write(1, &c[i], 1);
		}
		
	}
	write(1, "\n", 1);
}