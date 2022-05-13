char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int n;
    
    n = 0;
    while (dest[n])
        n++;
    i = 0;
    while (src[i] && i < nb)
    {
        dest[n + i] = src[i];
        i++;
    }
    dest[n + i] = '\0';
    return(dest);
}

