#include <unistd.h>

int     is_correct(int *tab, int index)
{
    int     i;
    int     d;

    i = 0;
    while (i < index)
    {
        d = index - i;
        if(tab[i] - d == tab[index] || tab[i] + d == tab[index])
            return (0);
        i++;
    }
    i = 0;
    while (i < index)
    {
        if (tab[i] == tab[index])
            return (0);
        i++;
    }
    return (1);
}

void    print_tab(int *tab)
{
    int         i;
    char    c;

    i = 0;
    while (i < 10)
    {
        c = tab[i] + '0';
        write(1, &c, 1);
        i++;
    }
    write(1, "\n", 1);
}

int     solve(int *tab, int index, int result)
{
    if (index == 10)
    {
        print_tab(tab);
        result++;
        return (result);
    }
    tab[index] = 0;
    while (tab[index] < 10)
    {
        if (is_correct(tab, index))
            result = solve(tab, index + 1, result);
        tab[index]++;
    }
    return (result);
}

int     ft_ten_queens_puzzle(void)
{
    int     tab[10];
    int     result;

    result = solve(tab, 0, 0);
    return (result);
}