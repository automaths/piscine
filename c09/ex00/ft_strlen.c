#include <unistd.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i])
        i++;
    return (i);
}

int     main(void)
{
    char str[5] = "hello";
    printf("%d", ft_strlen(str));
    return(0);
}