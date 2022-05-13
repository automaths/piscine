void    ft_ultimate_div_mod(int *a, int *b)
{
    int     mod;
    int     div;
    
    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}