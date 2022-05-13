#include <unistd.h>

int     ft_strlen(char *str)
{
    int     n;
    
    n = 0;
    while (str[n])
        n++;
    return (n);
}

int     is_correct_base(char *base)
{
    int     i;
    int     j;

    if (base[0] == '\0' || base[1] == '\0')
        return (0);
    i = 0;
    while (base[i])
    {
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
            return (0);
        if (base[i] == '-' || base[i] == '+')
            return (0);
        i++;
    }
    return (1);
}

void    ft_putnbr_base(int nbr, char *base)
{
    int     n;
    long        nb;
    
    nb = nbr;
    n = ft_strlen(base);
    if (!is_correct_base(base))
        return ;
    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    if (nb >= n)
        ft_putnbr_base(nb / n, base);
    write(1, &base[nb % n], 1);    
}