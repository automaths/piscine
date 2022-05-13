void    ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
    char    *tmp;
    int         i;
    int         j;

    i = 1;
    while (tab[i])
    {
        j = 1;
        while (tab[j])
        {
            if((*cmp)(tab[j-1], tab[j]) > 0)
            {
                tmp = tab[j];
                tab[j] = tab[j-1];
                tab[j-1] = tmp;
            }
            j++;
        }
        i++;
    }
}