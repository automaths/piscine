#include <stdlib.h>
#include "ft_stock_str.h"

int     strrlen(char *str)
{
    int     n;

    n = 0;
    while (str[n])
        n++;
    return (n);
}

char    *strrdup(char *str)
{
    char    *ptr;
    int         n;
    int         i;

    n = strrlen(str);
    ptr = (char *) malloc(sizeof(char) * (n + 1));
    if (ptr == NULL)
        return (NULL);
    ptr[n] = '\0';
    i = 0;
    while (i < n)
    {
        ptr[i] = str[i];
        i++;
    }
    return (ptr);
}

struct s_stock_str  *ft_strs_to_tab(int ac, char **av)
{
    int         i;
    t_stock_str             *tab;

    tab = (t_stock_str *)malloc(sizeof(t_stock_str) * ac);
    if (tab == NULL)
        return (NULL);
    i = 0;
    while (i < ac)
    {
        tab[i].size = strrlen(av[i]);
        tab[i].str = av[i];
        tab[i].copy = strrdup(av[i]);
        i++;
    }
    tab[i].str = 0;
    return (tab);
}