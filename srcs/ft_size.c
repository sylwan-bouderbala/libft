//
// Created by sylwa on 02/08/2022.
//
#include "ft_size.h"

int	ft_intsize(int nb)
{
    int i;

    i = 1;
    if (nb < 0)
    {
        nb = -nb;
        i ++;
    }
    while(nb > 10)
    {
        nb /= 10;
        i ++;
    }
    return i;
}

int	ft_stringsize(char *str)
{
    int n;

    n = 0;
    while (str[n])
        n ++;
    return n;
}

int	ft_intarraysize(int *tab)
{
    int n;

    n = 0;
    while(tab[n])
        n ++;
    return n;
}

int ft_stringarraysize(char **str)
{
    int n;

    n = 0;
    while (str[n] != 0)
        n++;
    return n;
}
