#include <unistd.h>

int main(int ac, char **av)
{
    // If there are no arguments, the program must display a \n.
    if (ac < 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    int arg = 1;
    while (arg < ac)
    {
        int i = 0;
        int in_word = 0;

        while (av[arg][i])
        {
            char c = av[arg][i];

            if (c == ' ' || c == '\t')
            {
                in_word = 0;
                write(1, &c, 1);
            }
            else
            {
                if (in_word == 0)
                {
                    in_word = 1;
                    if (c >= 'a' && c <= 'z')
                        c = c - 32;
                }
                else
                {
                    if (c >= 'A' && c <= 'Z')
                        c = c + 32;
                }
                write(1, &c, 1);
            }
            i++;
        }
        write(1, "\n", 1); // Displayed after each individual argument string finishes
        arg++;
    }
    return (0);
}