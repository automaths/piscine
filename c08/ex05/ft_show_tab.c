#include <unistd.h>

void    putstrr(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        write (1, &str[i], 1);
        i++;
    }
}

void    putnbrr(int nb)
{
    char    c;

    if (nb == -2147483648)
    {
        write (1, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    if (nb > 9)
        putnbrr(nb / 10);
    c = nb % 10 + '0';
    write (1, &c, 1);
}

void    ft_show_tab(struct s_stock_str *par)
{
    int     i;
    
    i = 0;
    while (par[i].str != 0)
    {
        putnbrr(par[i].size);
        write(1, "\n", 1);
        putstrr(par[i].str);
        write(1, "\n", 1);
        putstrr(par[i].copy);
        write(1, "\n", 1);
        i++;
    }
}