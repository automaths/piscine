#include "ft_list.h"

t_list  *ft_create_elem(void *data)
{
    t_list   *list;

    list = (t_list*)malloc(sizeof(t_list));
    list->data = data;
    list->next = NULL;
    return (list);
}

void    ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
    t_list  *tmp;
    t_list  *new;

    tmp = *begin_list;
    while (tmp->next != 0 && (*cmp)(tmp->next->data, data) != 0)
        tmp = tmp->next;
    new = ft_create_elem(data);
    new->next = tmp->next;
    tmp->next = new;
}