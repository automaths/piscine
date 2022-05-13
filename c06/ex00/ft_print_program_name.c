#include <unistd.h>

int     main(int argc, char **argv)
{
    int     i;

    argc = argc - 0;
    i = 0;
    while (argv[0][i])
    {
        write (1, &argv[0][i], 1);
        i++;
    }
    return (0);
}