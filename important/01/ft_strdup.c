#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *src)
{
	char	*res;
	int		len;
	int		i;

	len = 0;
	i = 0;
	if (!src)
		return (NULL);
	while (src[len])
		len++;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

if(!src)
return NULL;
while (src[len])
len++;
res = malloc(sizeof(char) * len);
if (!res)
return NULL;

while (src[i])
{
	res[i] = src[i];
	i++;
}
res[i] = '\0';
return (res);

