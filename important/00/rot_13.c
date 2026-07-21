#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        char *str = av[1];
        while (*str)
        {
            char c = *str;
            if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
            {
                c+= 13;
            }
            else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
            {
                c-=13;
            }
            write(1, &c, 1);
            str++;
        }
        
    }
    write(1, "\n", 1);
    
}