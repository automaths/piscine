#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp) (), void (*free_fct)(void *))
{
    t_list      *list;
    t_list      *ptr;

    list = (*begin_list);
    if (list != 0 && (*cmp)(list->data, data_ref) == 0)
    {
        (*begin_list) = list->next;
        (*free_fct)(list->data);
        free(list);
        list = (*begin_list);
        ptr = (*begin_list);
    }
    while (list != 0)
    {    
        if ((*cmp)(list->data, data_ref) == 0)
        {
            ptr->next = list->next;
            (*free_fct)(list->data);
            free(list);
            list = ptr;
        }
        ptr = list;
        list = list->next;
    }
}