#include <unistd.h>
#include "ft_list.h"
typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;


void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *list_ptr;

    while (begin_list != NULL)
    {
        list_ptr = begin_list;
        (*f)(list_ptr->data);
        begin_list = list_ptr->next;
    }
}