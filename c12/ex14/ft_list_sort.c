#include "ft_list.h"

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*tmp;
	t_list	*ptr;
	void	*swap;

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