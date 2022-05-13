int     ft_str_is_alpha(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] < 'A' || str[i] > 'z' 
            || (str[i] > 'Z' && str[i] < 'a'))
            return (0);
            i++;
    }
    return (1);
}