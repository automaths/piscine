int     find_base(char c, char *base)
{
    int i;
    i = 0;
    while (base[i])
    {
        if (base[i] == c)
            return (i);
        i++;
    }
    return (-1);
}

int     check_base(char *base)
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
        if (base[i] == '+' || base[i] == '-')
            return (0);
        i++;
    }
    return (1);
}

int     ft_atoi_base(char *str, char *base)
{
    int     n;
    int     t;
    int     i;
    int     x;

    n = 0;
    t = 0;
    i = 0;
    x = 0;
    if (!check_base(base))
        return (0);
    while (base[n])
        n++;
    while ((str[i] >= 9 && str[i] <= 13 ) || str[i] == ' ')
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            t++; 
        i++;
    }
    while (find_base(str[i], base) >= 0)
    {
        x *= n;
        x += find_base(str[i], base);
        i++;
    }
    if (t % 2 == 1)
        x *= -1;
    return (x);
}