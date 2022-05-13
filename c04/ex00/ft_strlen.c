int     ft_strlen(char *str)
{
    int     n;
    
    n = 0;
    while (str[n])
        n++;
    return(n);
}