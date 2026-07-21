#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        if (av[2][1] == '\0' && av[3][1] == '\0')
        {
            char *str = av[1];
            char tgt = av[2][0];
            char rpc = av[3][0];

            while (*str)
            {
                char c = *str;
                if (c == tgt)
                {
                    c = rpc;
                }
                write(1, &c, 1);
                str++;
            }
        }
    }
    write(1, "\n", 1);
    
}