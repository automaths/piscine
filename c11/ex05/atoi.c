#include "ft.h"

int     ft_atoi(char *str)
{
    int nb;
    int i;
    int t;
    nb = 0;
    i = 0;
    t = 0;
    while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            t++;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        nb *= 10;
        nb += str[i] - '0';
        i++;
    }
    if (t % 2 == 1)
        nb *= -1;
    return (nb);
}