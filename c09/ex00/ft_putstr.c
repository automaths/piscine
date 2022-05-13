#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int     main(void)
{
    char str[5] = "hello";
    ft_putstr(str);
    return (0);
}