#include <stdlib.h>

int     ft_ultimate_range(int **range, int min, int max)
{
    int     *ptr;
    int     n;
    int     i;
    
    if (min >= max)
        return (-1);
    n = max - min;
    ptr = (int *) malloc(sizeof(int) * n);
    if (ptr == NULL)
        return (-1);
    i = 0;
    while (i < n)
    {
        ptr[i] = min;
        min++;
        i++;
    }
    *range = ptr;
    return (n);
}