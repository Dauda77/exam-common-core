#include <unistd.h>

char	*ft_strrev(char *str)
{
	if (str == NULL)
		return (NULL);

	int len = 0;
	while (str[len])
		len++;

	char tmp;
	int l = 0;
	int r = len - 1;

	while (l < r)
	{
		tmp = str[l];
		str[l] = str[r];
		str[r] = tmp;
		l++;
		r--;
	}
	return (str);
}