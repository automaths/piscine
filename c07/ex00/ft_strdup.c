#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char    *dest;
    int         n;
    int         i;

    n = 0;
    while (src[n])
        n++;
    dest = (char *)malloc(sizeof(char) * (n + 1));
    if (dest == NULL)
        return (NULL);
    dest[n] = '\0';
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}