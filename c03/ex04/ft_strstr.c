char    *ft_strstr(char *str, char *to_find)
{
    unsigned int    i;
    unsigned int    j;

    if (to_find == 0)
        return (0);
    i = 0;
    while (str[i])
    {
        j = 0;
        while(str[i] && str[i + j] == to_find[j])
        {
            if(to_find[j + 1] == '\0')
                return(str[i])
            j++;
        }
        i++;
    }
    return (0);
}