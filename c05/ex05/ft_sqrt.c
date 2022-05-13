int     ft_sqrt(int nb)
{
    int i;
    i = 1;
    if (nb <= 0)
        return (0);
    while (i <= nb / i && i <= 36340)
    {
        if (i * i == nb)
            return (i);
        i++;
    }
    return (0);
}