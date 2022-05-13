#include <unistd.h>

int     main(int argc, char **argv)
{
    int     n;
    int     i;

    argc = argc - 0;
    n = 0;
    while (argv[n])
        n++;
    n--;
    while (n >= 1)
    {
        i = 0;
        while (argv[n][i])
        {
            write(1, &argv[n][i], 1);
            i++;
        }
        write(1, "\n", 1);
        n--;
    }
}