#include <stdlib.h>

int     nb_characters(int size, char **strs)
{
    int     i;
    int     j;
    int     n;

    i = 0;
    n = 0;
    while (i < size)
    {
        j = 0;
        while(strs[i][j])
        {
            j++;
            n++;
        }
        i++;
    }
    return (n);
}

char    *allocate(int size, char **strs, char *sep, char *join)
{
    int     i;
    int     n;
    int     j;

    i = 0;
    n = 0;
    while (i < size)
    {
        j = 0;
        while(strs[i][j])
        {
            join[n] = strs[i][j];
            j++;
            n++;
        }
        j = 0;
        while(sep[j] && i < size - 1)
        {
            join[n] = sep[j];
            j++;
            n++;
        }
        i++;
    }
    return (join);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    char    *join;
    int         n;
    int         m;

    if (size == 0)
        return (NULL);
    m = 0;
    while(sep[m])
        m++;
    n = nb_characters(size, strs);
    join = (char *)malloc(sizeof(char) * (n + (m * (size - 1)) + 1));
    if (join == NULL)
        return (NULL);
    join[n + (m * (size - 1))] = '\0';
    join = allocate(size, strs, sep, join);
    return (join);
}