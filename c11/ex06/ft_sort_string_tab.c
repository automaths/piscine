#include <stdio.h>

int     ft_strcmp(char *one, char *two)
{
    int     i;

    i = 0;
    while (one[i] && two[i] && one[i] == two[i])
        i++;
    return (one[i] - two[i]);
}

void    ft_sort_string_tab(char **tab)
{
    char    *tmp;
    int         i;
    int         j;
    
    i = 1;
    while (tab[i])
    {
        j = 1;
        while (tab[j])
        {
            if (ft_strcmp(tab[j-1], tab[j]) > 0)
            {
                tmp = tab[j];
                tab[j] = tab[j-1];
                tab[j-1] = tmp;
            }
            j++;
        }
        i++;
    }
}