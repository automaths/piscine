#include "ft_list.h"

void    free_data(void *data)
{
    free(data);
}

void    ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
    while(begin_list != 0)
    {
        (*free_fct)(begin_list->data);
        begin_list = begin_list->next;
    }
    free(begin_list);
}