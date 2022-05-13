#include "ft_list.h"

t_list  *ft_create_elem(void *data)
{
    t_list   *list;

    list = (t_list*)malloc(sizeof(t_list));
    list->data = data;
    list->next = NULL;
    return (list);
}

void    ft_list_push_back(t_list **begin_list, void *data)
{
    while ((*begin_list)->next != 0)
        (*begin_list) = (*begin_list)->next;
    (*begin_list)->next = ft_create_elem(data);
}