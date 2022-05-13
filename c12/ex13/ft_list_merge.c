#include "ft_list.h"

void    ft_list_merge(t_list **begin_list, t_list *begin_list2)
{
    t_list *tmp;
    tmp = *begin_list;

    while (tmp->next != 0)
        tmp = tmp->next;
    while (begin_list2 != 0)
    {
        tmp->next = begin_list2;
        tmp = tmp->next;
        begin_list2 = begin_list2->next;
    }
    tmp->next = 0;
}