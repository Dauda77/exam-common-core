#include <unistd.h>

void ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void	sort_int_tab(int *tab, unsigned int size)
{
    if (size < 2)
    return;

    unsigned int i = 0;
    while (i < size - 1)
    {
        unsigned int j = 0;
        while (j < size - 1 - i)
        {
            if (tab[j] >= tab[j + 1])
            {
                ft_swap(&tab[j], &tab[j + 1]);
            }
            j++;
            
        }
        i++;
        
    }
    
}