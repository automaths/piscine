#include "ft_list.h"

t_list  *ft_create_elem(void *data)
{
    t_list   *list;

    list = (t_list*)malloc(sizeof(t_list));
    list->data = data;
    list->next = NULL;
    return (list);
}

void    ft_list_push_front(t_list **begin_list, void *data)
{
    t_list          *add;
    void    *tmp;
    
    add = ft_create_elem(data);
    tmp = (*begin_list)->data;
    (*begin_list)->data = add->data;
    add->data = tmp;
    add->next = (*begin_list)->next;
    (*begin_list)->next = add;
}