#include <unistd.h>

int	main(int ac, char **av)
{
	char *s = av[1], *f_start, *f_end;

	if (ac > 1)
	{
		while (*s == ' ' || *s == '\t')
			s++;
		f_start = s;
		while (*s && *s != ' ' && *s != '\t')
			s++;
		f_end = s;
		while (*s == ' ' || *s == '\t')
			s++;
		while (*s)
		{
			if (*s != ' ' && *s != '\t')
			{
				while (*s && *s != ' ' && *s != '\t')
					write(1, s++, 1);
				write(1, " ", 1);
			}
			else
				s++;
		}
		while (f_start < f_end)
			write(1, f_start++, 1);
	}
	write(1, "\n", 1);
}