#include "ft.h"

int     main(int argc, char **argv)
{
    argc = argc - 0;
    if(argc != 4)
        return (0);
    if(argv[2][1] != '\0')
      return (0);
    if(!is_operator(argv[2][0]))
    {
        write (1, "0", 1);
        return (0);
    }
    if(argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
    {
        write (1, "Stop : division by zero", 22);
        write(1, "\n", 1);
        return (0);
    }
    if(argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
    {
        write (1, "Stop : modulo by zero", 22);
        write(1, "\n", 1);
        return (0);
    }
    printf("%d", ft_do_op(argv[1], argv[2][0], argv[3]));
    return (0);
}