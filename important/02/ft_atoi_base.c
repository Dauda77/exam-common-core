#include <unistd.h>

static int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int sign = 1;
	int value;

	if (!str || str_base < 2 || str_base > 16)
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	while ((value = ft_isdigit(*str)) >= 0 && value < str_base)
	{
		result = result * str_base + value;
		str++;
	}

	return (result * sign);
}