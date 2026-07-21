#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int *res;
	int len;
	int i;

	if (start <= end)
		len = end - start + 1;
	else
		len = start - end + 1;
	res = malloc(sizeof(int) * len);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = start;
		if (start < end)
			start++;
		else if (start > end)
			start--;
		i++;
	}
	return (res);
}