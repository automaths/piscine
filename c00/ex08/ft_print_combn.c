#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_tab_init(int *tab, int n)
{
    int i;
    i = 0;
    while (i < n)
    {
        tab[i] = i;
        i++;
    }
}

void    ft_print_number(int *tab, int n)
{
    int i;
    i = 0;
    while (i < n)
    {
        ft_putchar(tab[i] + '0');
        i++;
    }
    if (tab[0] < 10 - n)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void    ft_comb(int *tab, int i, int n)
{
    tab[i] = tab[i - 1] + 1;
    while (tab[i] <= 10 - n + i && i < n)
    {
        if (i == n - 1)
        ft_print_number(tab, n);
        ft_comb(tab, i + 1, n);
        tab[i]++;
    }
}

void    ft_print_combn(int n)
{
    int tab[10];
    ft_tab_init(tab, n);
    while (tab[0] <= 10 - n)
    {
        if (n > 0)
            ft_comb(tab, 1, n);
        tab[0]++;
    }
}