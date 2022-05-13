#include "ft_list.h"

t_list  *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    unsigned int    i;

    i = 0;
    while (begin_list != 0 && i < nbr)
    {
        begin_list = begin_list->next;
        i++;
    }
    if (i == nbr)
        return (begin_list);
    return (0);
}