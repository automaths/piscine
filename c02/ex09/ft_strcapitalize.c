char    *ft_strcapitalize(char *str)
{
    int     i;
    int     t;
    
    i = 0;
    t = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z' && t == 1)
            str[i] += 32;
        if (((str[i] >= 'A' && str[i] <= 'Z') 
            || (str[i] >= '0' && str[i] <= '9')) && t == 0)
            t = 1;
        if (str[i] >= 'a' && str[i] <= 'z' && t == 0)
        {
            str[i] -= 32;
            t = 1;
        }
        if ((str[i] < '0' || str[i] > '9') && (str[i] < 'a' || str[i] > 'z')
            && (str[i] < 'A' || str[i] > 'Z') && t == 1)
            t = 0;
        i++;
    }
    return (str);
}