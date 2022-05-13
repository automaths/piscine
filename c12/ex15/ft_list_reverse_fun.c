#include "ft_list.h"

void    ft_list_reverse_fun(t_list *begin_list)
{
    t_list          *tmp;
    int         size;
    int         i;
    void    *ptr;
    
    tmp = begin_list;
    size = ft_list_size(begin_list) - 1;
    i = 0;
    while (i <= size / 2)
    {
        ptr = ft_list_at(begin_list, i)->data;
        ft_list_at(begin_list, i)->data = ft_list_at(begin_list, size - i)->data;
        ft_list_at(begin_list, size - i)->data = ptr;
        i++;
    }
}