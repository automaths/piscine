#include "ft_list.h"

void    ft_list_reverse(t_list **begin_list)
{
    int     size;
    int     i;
    void        *data;
    
    size = ft_list_size(*begin_list) - 1;
    i = 0;
    while (i <= size / 2)
    {
        data = ft_list_at(*begin_list, i)->data;
        ft_list_at(*begin_list, i)->data = ft_list_at(*begin_list, size - i)->data;
        ft_list_at(*begin_list, size - i)->data = data;
        i++;
    }
}