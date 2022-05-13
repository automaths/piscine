#include <unistd.h>

void    read_arg(char **argv)
{
    int     n;
    int     i;

    n = 1;
    while (argv[n])
    {
        i = 0;
        while (argv[n][i])
        {
            write (1, &argv[n][i], 1);
            i++;
        }
        write (1, "\n", 1);
        n++;
    }
}

int     main(int argc, char **argv)
{
    char    *tmp;
    int         n;
    int         i;

    argc = argc - 0;
    n = 2;
    while (argv[n])
    {
        i = 2;
        while (argv[i])
        {
            if (argv[i - 1][0] > argv[i][0])
            {
                tmp = argv[i];
                argv[i] = argv[i - 1];
                argv[i - 1] = tmp;
            }
            i++;
        }
        n++;
    }
    read_arg(argv);
    return (0);
}