#include <stdlib.h>

int     *ft_range(int min, int max)
{
    int     *tab;
    int     n;
    int     i;
    
    if (min >= max)
        return (NULL);
    n = max - min;
    tab = (int *) malloc(sizeof(int) * n);
    if (tab == NULL)
        return (NULL);
    i = 0;
    while (i < n)
    {
        tab[i] = min;
        min++;
        i++;
    }
    return (tab);
}