unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    n;
    unsigned int    m;

    while(dest[n])
        n++;
    while(src[m])
        m++;
    if (size <= n || size == 0)
        return (m + size);
    while(src[i] && n + i < size - 1)
    {
        dest[n + i] = src[i];
        i++;
    }
    dest[n + i] = '\0';
    return (n + m);
}