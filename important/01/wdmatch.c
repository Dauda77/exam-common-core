#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		char *tmp = av[1];

		while (*tmp && *av[2])
		{
			if (*tmp == *av[2])
				tmp++;
			av[2]++;
		}
		if (!(*tmp))
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
}
