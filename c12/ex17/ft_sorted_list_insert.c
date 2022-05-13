#include "ft_list.h"

int    ft_strcmp(void *s1, void *s2)
{
	char	*one;
	char	*two;
	int			i;

	one = (char *)s1;
	two = (char *)s2;
	i = 0;
	while (one[i] && one[i] == two[i])
		i++;
    return (one[i] - two[i]);
}

void    ft_list_merge(t_list **begin_list, t_list *begin_list2)
{
    t_list	*tmp;

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

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*tmp;
	t_list	*ptr;
	void		*swap;

	tmp = (*begin_list);
	while(tmp != 0)
	{
		ptr = tmp->next;
		while(ptr != 0)
		{
			if((*cmp)(tmp->data, ptr->data) > 0)
			{
				swap = tmp->data;
				tmp->data = ptr->data;
				ptr->data = swap;
			}
			ptr = ptr->next;
		}
		tmp = tmp->next;
	}
}

void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
	ft_list_merge(begin_list1, begin_list2);
	ft_list_sort(begin_list1, cmp);
}