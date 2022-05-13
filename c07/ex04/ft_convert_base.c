#include <stdlib.h>

int     find_base(char c, char *base);
int     check_base(char *base);
int     ft_atoi_base(char *str, char *base);

int     count_characters(int nb, char *base)
{
    int     n;
    int     x;
    long        nbr;

    n = 0;
    x = 0;
    nbr = nb;
    while (base[n])
        n++;
    if (nbr == 0)
        return(1);
    if(nbr < 0)
    {
        nbr *= -1;
        x++;
    }
    while (nbr > 0)
    {
        nbr /= n;
        x++;
    }
    return (x);
}

char    *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    char    *str;
    long            x;
    int         c;
    int         n;
    int         i;

    if (!check_base(base_from) || !check_base(base_to) || nbr[0] == '\0')
        return (0);
    x = ft_atoi_base(nbr, base_from);
    c = count_characters(x, base_to);
    str = (char *) malloc(sizeof(char) * (c + 1));
    if (str == 0)
        return (0);
    str[c] = '\0';
    c--;
    n = 0;
    while (base_to[n])
        n++;
    i = 0;
    if (x < 0)
    {
        str[i] = '-';
        x *= -1;
        i++;
    }
    while (c >= i)
    {
            str[c] = base_to[x % n];
            x /= n;
            c--; 
    }
    return (str);
}