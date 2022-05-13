#include "ft_list.h"

t_list  *ft_create_elem(void *data)
{
    t_list   *list;

    list = (t_list*)malloc(sizeof(t_list));
    list->data = data;
    list->next = NULL;
    return (list);
}

t_list  *ft_list_push_strs(int size, char **strs)
{
    int     i;
    t_list      *list;
    t_list      *ptr;

    i = size - 1;
    list = ft_create_elem(strs[i]);
    ptr = list;
    i--;
    while (i >= 0)
    {
        list->next = ft_create_elem(strs[i]);
        list = list->next;
        i--;
    }
    return (ptr);
}