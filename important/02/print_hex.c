#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
static int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

static int	ft_print_hex(unsigned int nb)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb >= 16)
		ft_print_hex(nb / 16);
	ft_putchar(base[nb % 16]);
	return (nb);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		long n = ft_atoi(av[1]);
		if (n >= 0)
			ft_print_hex(n);
	}
	write(1, "\n", 1);
}