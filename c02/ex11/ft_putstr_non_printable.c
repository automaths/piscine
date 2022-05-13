#include <unistd.h>

void    ft_print_hexa(char c)
{
    char    hexa[16] = "0123456789abcdef";
    
    write (1, "\\", 1);
    write (1, &hexa[c / 16], 1);
    write (1, &hexa[c % 16], 1);
}

void    ft_putstr_non_printable(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] < 32 || str[i] == 127)
            ft_print_hexa(str[i]);
        if (str[i] >= 32 && str[i] <= 126)
            write(1, &str[i], 1);
        i++;
    }
}