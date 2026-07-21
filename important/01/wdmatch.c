#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	char *str1 = av[1];
	char *str2 = av[2];
	if (ac == 3)
	{
		while (str2[j])
		{
			if (str1[i] == str2[j])
				i++;
			j++;
		}
		if (str1[i] == '\0')
		{
            int k = 0;
            while (str1[k])
            {
                write(1, &str1[k], 1);
                k++;
            }
            
		}
	}
	write(1, "\n", 1);
}