int     ft_iterative_power(int nb, int power)
{
    int     x;

    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    x = 1;
    while (power >= 1)
    {
        x *= nb;
        power--;
    }
    return (x);
}