#include <unistd.h>

int     main(int argc, char **argv)
{
    int     i;
    int     j;

    argc = argc - 0;
    i = 1;
    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            write(1, &argv[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
    return (0);
}