#include <unistd.h>

int ft_atoi(const char *str)
{
    int sign;
    int res;
    int i;

    sign = 1;
    res = 0;
    i = 0;

    while (str[i] == ' ' || str[i] >= 7 && str[i] <= 13 )
    {
        i++;
    }

    if (str[i] == '-')
    {
       sign = -1;
       i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return(res * sign);   
}