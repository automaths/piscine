#include "ft.h"

int     ft_do_op(char *val1, char operator, char *val2)
{
    int one;
    int two;
    int x;
    x = 9;
    one = ft_atoi(val1);
    two = ft_atoi(val2);
    int (*operation[5])(int, int);
    operation[0] = multiply;
    operation[1] = divide;
    operation[2] = modulo;
    operation[3] = minus;
    operation[4] = add;
    if (operator == '*')
        x = (* operation[0])(one, two);
    if (operator == '/')
        x = (* operation[1])(one, two);
    if (operator == '%')
        x = (* operation[2])(one, two);
    if (operator == '-')
        x = (* operation[3])(one, two);
    if (operator == '+')
        x = (* operation[4])(one, two);
    return (x);
}