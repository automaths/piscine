#include <stdlib.h>

int     *ft_map(int *tab, int length, int(*f)(int))
{
    int     i;
    int     *tabr;

    tabr = (int *) malloc(sizeof(int) * length);
    if (tabr == NULL)
        return (NULL);
    i = 0;
    while (i < length)
    {
        tabr[i] = (*f)(tab[i]);
        i++;
    }
    return (tabr);
}