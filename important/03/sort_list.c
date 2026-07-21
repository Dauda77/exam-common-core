#include "list.h"
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list t_list;

struct  s_list
{
    int data;
    t_list *next;
};


t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int temp = 0;
    t_list* cur = lst;

    while (lst->next)
    {
        if (cmp(lst->data, lst->next->data) == 0)
        {
            temp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = temp;
            lst = cur;
        }
        else
        lst = lst->next;
    }
    lst = cur;
    return(lst);
}