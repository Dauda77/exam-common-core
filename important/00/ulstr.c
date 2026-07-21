#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        while (*av[1])
        {
            char c = *av[1];
            if (c >= 'a' && c <= 'z')
            {
                c-= 32;
            }
            else if (c >= 'A' && c <= 'Z')
            {
                c += 32;
            }
            write(1, &c, 1);
            av[1]++;
        }
    }
    write(1, "\n", 1);
    
}