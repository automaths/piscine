int     ft_iterative_factorial(int nb)
{
    int     x;
    
    x = 1;
    if (nb == 0)
        return (1);
    if (nb < 0)
        return (0);
    while (nb >= 1)
    {
        x *= nb;
        nb--;
    }
    return (x);
}