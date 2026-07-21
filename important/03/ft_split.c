#include <stdlib.h>

char	**ft_split(char *str)
{
	char	**res;
	int		i = 0, j = 0, k;

	res = malloc(1000);
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i])
		{
			res[j] = malloc(1000);
			k = 0;
			while (str[i] && str[i] != ' ')
				res[j][k++] = str[i++];
			res[j++][k] = 0;
		}
	}
	res[j] = 0;
	return (res);
}