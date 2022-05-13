int     ft_any(char **tab, int(*f)(char*))
{
    int     i;
    int     n;

    i = 0;
    n = 0;
    while (tab[i])
    {
        if ((*f)(tab[i]))
            n++;
        i++;
    }
    return (n);
}