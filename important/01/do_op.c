#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		int a = atoi(av[1]);
		int b = atoi(av[3]);
		int res = 0;

		if (*av[2] == '+')
		{
			res = a + b;
		}
		else if (*av[2] == '-')
		{
			res = a - b;
		}
		else if (*av[2] == '*')
		{
			res = a * b;
		}
		else if (*av[2] == '/')
		{
			res = a / b;
		}
		else if (*av[2] == '%')
		{
			res = a % b;
		}
		printf("%d\n", res);
	}
	else
		write(1, "\n", 1);
}