#include <unistd.h>

int	main(int ac, char **av)
{
	char	*str;
	char	c;

	if (ac == 2)
	{
		str = av[1];
		while (*str)
		{
			c = *str;
			if ((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))
			{
				c += 1;
			}
			else if (c == 'z')
			{
				c = 97;
			}
			else if (c == 'Z')
			{
				c = 65;
			}
			write(1, &c, 1);
			str++;
		}
	}
	write(1, "\n", 1);
}
