unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int     n;
    unsigned int     m;
    unsigned int     i;

    n = 0;
    m = 0;
    i = 0;
    while (src[n])
        n++;
    while(src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (n);
}