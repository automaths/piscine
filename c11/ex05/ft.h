#ifndef FT_H
# define FT_H

#include <unistd.h>
#include <stdio.h>

int     ft_atoi(char *str);
int     multiply(int one, int two);
int     divide(int one, int two);
int     modulo(int one, int two);
int     minus(int one, int two);
int     add(int one, int two);
int     ft_do_op(char *val1, char operator, char *val2);
int     is_operator(char c);

#endif