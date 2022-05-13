void    ft_sort_int_tab(int *tab, int size)
{
    int     i;
    int     j;
    int     tmp;

    i = 0;
    while (i < size)
    {
        j = 0;
        while (tab[j] && j < size - 1)
        {
            if (tab[j] > tab[j + 1])
            {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
            j++;
        }
        i++;
    }
}