#include <stdlib.h>

int     is_charset(char *str, char *charset)
{
    while (*charset)
    {
        if (*str == *charset)
            return (1);
        charset++;
    }
    return (0);
}

int     count_characters(char *str, char *charset)
{
    int     n;

    n = 0;
    while (!is_charset(str, charset))
    {
        str++;
        n++;
    }
    return (n);
}

int     count_words(char *str, char *charset)
{
    int     n;

    n = 0;
    while (*str)
    {
        while (*str && is_charset(str, charset))
            str++;
        if (*str)
            n++;
        while (*str && !is_charset(str, charset))
            str++;
    }
    return (n);
}

char    *fill(char *str, char *charset)
{
    char    *fill;
    int         i;
    int         n;

    n = count_characters(str, charset);
    fill = (char *) malloc(sizeof(char) * (n + 1));
    fill[n] = '\0';
    i = 0;
    while (i < n)
    {
            fill[i] = str[i];
            i++;
    }
    return (fill);
}

char    **ft_split(char *str, char *charset)
{
    char    **split;
    int         n;

    n = count_words(str, charset);
    split = (char **) malloc(sizeof(char *) * n);
    if (split == NULL)
        return (NULL);
    n = 0;
    while (*str)
    {
        while (*str && is_charset(str, charset))
            str++;
        if (*str)
        {
            split[n] = fill(str, charset);
            n++;
        }
        while (*str && !is_charset(str, charset))
            str++;
    }
    return (split);
}