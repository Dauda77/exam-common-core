#include <unistd.h>

int	ft_list_size(t_list *begin_list)
{
    int count = 0;
    char *curr = *begin_list;

    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    return (count);
    
}