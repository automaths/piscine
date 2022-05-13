#include "ft.h"

int     multiply(int one, int two)
{
    int x;
    x = one * two;
    return (x);
}

int     divide(int one, int two)
{
    int x;
    x = one / two;
    return (x);
}

int     modulo(int one, int two)
{
    int x;
    x = one % two;
    return (x);
}

int     minus(int one, int two)
{
    int x;
    x = one - two;
    return (x);
}

int     add(int one, int two)
{
    int x;
    x = one + two;
    return (x);
}

int     is_operator(char c)
{
    if (c == '+' || c == '-' || c == '/' || c == '*' || c == '%')
        return (1);
    return (0);
}